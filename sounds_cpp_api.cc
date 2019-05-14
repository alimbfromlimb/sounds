#include <stdio.h>
#include <string>
#include <vector>

#include "server.h"
#include "Classes/DataSamples.cc"
#include "Classes/bytevector.cc"
#include "Classes/WAV_File.cc"
#include "Classes/UniformDataSamples.cc"
#include "Classes/Queries/Crop.cc"
#include "Classes/Queries/Volume.cc"
#include "Classes/Queries/BitSampleRate.cc"

#include <iostream>
using namespace std;

string sounds_crop(const string &name, const string &new_name, double left, double right) {
	try {
		//cout << name << " " << new_name << endl;
			
		bytevector b;
		b.read_from_file(name);
		WAV_File A;
		A.init(b, new_name);
		
		int l = (int) (left / 1000 * A.SampleRate);
		int r = (int) (right / 1000 * A.SampleRate);
		
		Crop Q("", l, r);
		Q.transform(&A, new_name);
		
	} catch (const char *err) {
		printf("%s\n", err);
		string error(err);
		return error;
	}
	
	return "OK";
}

string sounds_volume(const string &name, const string &new_name, double k, double left, double right, bool smooth) {
	try {
		
		bytevector b;
		b.read_from_file(name);
		WAV_File A;
		A.init(b, new_name);
		
		int l = (int) (left / 1000 * A.SampleRate);
		int r = (int) (right / 1000 * A.SampleRate);
		
		Volume Q("", k, l, r, smooth);
		Q.transform(&A, new_name);
		
	} catch (const char *err) {
		printf("%s\n", err);
		string error(err);
		return error;
	}
	
	return "OK";
}

vector<double> sounds_info(const string &name) {
	
	/*string ret;
	
	try {
		bytevector b;
		b.read_from_file(name);
		WAV_File A;
		A.init(b);
		
		ret = "<br> <br> Stats: <br>";
		ret += "Size: " + to_string(A.size) + " bytes<br>";
		ret += "Number of audio channels: " + to_string(A.NumChannels) + "<br>";
		ret += "Sample rate: " + to_string(A.SampleRate) + " samples/sec<br>";
		ret += "Bit depth: " + to_string(A.BitDepth) + " bits/sample<br>";
		ret += "Number of samples: " + to_string(A.NumSamples) + " samples<br>";
		ret += "Duration: " + to_string((double) A.NumSamples / A.SampleRate) + " sec<br>";
		ret += "<br>";
		
	} catch (const char *err) {
		printf("%s\n", err);
		string error(err);
		return error;
	}*/
	
	vector<double> ret(6);
	ret[0] = -1;
	
	try {
		bytevector b;
		b.read_from_file(name);
		WAV_File A;
		A.init(b);
		
		ret[0] = (double) A.size;
		ret[1] = (double) A.NumChannels;
		ret[2] = (double) A.SampleRate;
		ret[3] = (double) A.BitDepth;
		ret[4] = (double) A.NumSamples;
		ret[5] = (double) A.NumSamples / A.SampleRate; // duration in seconds
		
	} catch (const char *err) {
		printf("%s\n", err);
		string error(err);
		//return error;
	}
	
	return ret;
	
	// if ret[0] == -1, then error
}

vector<double> sounds_classify(const string &name) {
	
	write(2, "hello1\n", 7);	
	
	vector<double> ret(1);
	ret[0] = -1;
	
	write(2, "hello2\n", 7);
	
	try {
		write(2, "hello3\n", 7);
		
		bytevector b;
		b.read_from_file(name);
		write(2, "hello4\n", 7);
		WAV_File A;
		A.init(b, name);
		
		write(2, "hello:)\n", 6);
		
		ret = A.classify();
		
	} catch (const char *err) {
		write(2, "hello9\n", 7);
		printf("%s\n", err);
		string error(err);
		//return error;
	}

	return ret;
}



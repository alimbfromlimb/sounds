# sounds

This project is a term paper of second-year students of the DCAM (Department of Control and Applied Mathematics) of the Moscow Institute of Physics and Technology: Bukharaev Alim, Prokhorov Yuri, Yaushev Farukh and Savelov Mikhail. It consists of 3 main separate parts:
1. C ++ library and API for processing audio recordings.
2. API in the form of a PHP extension for processing audio recordings.
3. The user interface in the form of a web application.
Detailed documentation can be found in the Documentation / docs.pdf folder.

Initially, we had the idea of writing a program capable of recognizing musical instruments on audio recordings. The reason is that this problem does not have exact results, and we wanted to get our own solution. Then we decided to expand the functionality of our application by adding the most popular queries and implement it as a web service that is easily accessible to the user. Thus, the main objectives of the project:
- Improving team skills.
- Implementation of the application on popular topics.
- Application of knowledge of the C ++ language.
- The study of new tools and technologies.

The user is prompted to upload a WAV file to the server. After that, he receives some statistics about the file and selects what action he wants to perform with it or with several files at once. Among the possible functions are: predicting a musical instrument playing on the audio recording, merging files, trimming them, increasing volume, accelerating, and other options. Finally, the user can listen to the converted file and download it back to his device.

When developing the application, the following technologies were used:
- C ++ language of standard 11 for writing a server component (kernel).
- A set of tools for writing a PHP extension in C ++.
- Python 3 and the Keras, NumPy, SciPy libraries for implementing a neural network.
- PHP, HTML5, CSS and Javascript tools for user interface development.

----

To use the instrument classifier:
- put my_model_one_sec_19.h5, launch.py, audio_file.wav in the same directory
- cd </that_directory>
- python -W ignore launch.py audio_file.wav
    (or python3 -W ignore launch.py audio_file.wav)

# sounds

Данный проект - курсовая работа студентов второго курса ФУПМ (факультета управления и прикладной математики) МФТИ: Бухараева Алима, Прохорова Юрия, Яушева Фаруха и Савелова Михаила. Он состоит из 3 основных обособленных частей:
1. Библиотека и API на C++ для обработки аудиозаписей.
2. API в виде расширения PHP для обработки аудиозаписей.
3. Пользовательский интерфейс в виде веб-приложения.
Подробную документацию можно найти в папке Documentation/docs.pdf.

Изначально, у нас была идея написать программу, способную распознавать музыкальные инструменты на аудиозаписи. Причина связана с тем, что эта задача не имеет точных результатов, и мы хотели получить свое собственное частное решение. Затем мы решили расширить функционал нашего приложения, добавив наиболее популярные запросы, и реализовать его как легко доступный пользователю веб-сервис. Таким образом, основные цели проекта:
- Повышение командных навыков.
- Реализация приложение по популярной тематике.
- Применение знаний языка C++.
- Изучение новых инструментов и технологий.

Пользователю предлагается загрузить файл в формате WAV на сервер. После этого он получает некоторую статистику о файле и выбирает, какое действие он желает выполнить с ним или сразу с несколькими файлами. Среди возможных функций: предсказание музыкального инструмента по аудиозаписи, слияние файлов, их обрезка, усиление громкости, ускорение и другие преобразования. Пользователь имеет возможность отправить сообщение о том, угадала ли сеть, а аудиозапись может быть использована далее для дальнейшего обучения нашей или каких-либо других моделей. Наконец, преобразованный файл пользователь может прослушать и загрузить на обратно на свое устройство.

При разработке приложения использовались следующие технологии:
- Язык С++ стандарта 11 для написания серверной составляющей (ядра).
- Набор инструментов для написания расширения PHP на С++.
- Python 3 и библиотеки Keras, NumPy, SciPy для реализации нейронной сети.
- Средства PHP, HTML5, CSS и Javascript для разработки пользовательского интерфейса.

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

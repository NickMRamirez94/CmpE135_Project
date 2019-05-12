# CmpE135_Project

The RPS application is a GUI Rock Paper Scissors application that is built using the Qt framework. This was a project for CmpE 135 - Object Oriented Analysis and Design at SJSU. 

## Requirements

* Ubuntu 16.04+
* GCC 5.5.0
* GNU Make 4.1
* Qt 5.9.6
* QMake 3.1
* Qt Creator 4.7.0
* Git

## Installation of requirements
### Using Web Installer

[Qt Download](https://www.qt.io/download-qt-installer?hsCtaTracking=9f6a2170-a938-42df-a8e2-a9f0b1d6cdce%7C6cb0de4f-9bb5-4778-ab02-bfb62735f3e5) - For Qt library and Qt Creator (IDE)

Download all Qt 5.9.6 library files, Qt Creator, and only Desktop related files.

### Using Terminal

```
sudo apt-get install qtcreator
```

```
sudo apt install qt5-default
```

## Run the Application

Clone the application directory.

```
git clone https://github.com/NickMRamirez94/RPS.git
```

### Through Qt Creator

Delete the .user file. Open the Qt Creator. Select Open Project. Select RPS.pro file. Qt Creator will import files. The application can then be run from there after specifying your environment settings. Make sure that you include the Desktop Application kit.

If there is an error between version try cleaning the project and rebuilding.

### Through Terminal

In terminal Navigate to the RPS directory. Then run:

```
qmake RPS.pro
```

Followed by:

```
make
```

An executable should have been created. So you can then run:

```
./RPS
```

If qmake is not found by default you'll need to specifiy the path to the executable. In general it is found in:

```
/home/{user}/Qt/{version}/gcc_64/bin/qmake
```

## How to Use

Upon launching the application the user will be presented with a series of dialogs that will allow the user to Login/Create a New User and choose the settings for a game of RPS.

<p float="left">
  <img src="https://raw.githubusercontent.com/NickMRamirez94/RPS/master/DemoScreenshots/RPS_NewUser.png" width="100" />
  <img src="https://raw.githubusercontent.com/NickMRamirez94/RPS/master/DemoScreenshots/RPS_Login.png" width="100" /> 
  <img src="https://raw.githubusercontent.com/NickMRamirez94/RPS/master/DemoScreenshots/RPS_Settings.png" width="100" />
</p>

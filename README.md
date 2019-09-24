# Morse-Code-Convertor
This is a simple repository that contains various ways of encoding to morse and decoding morse in C. The algorithms implemented are a Binary tree traverse and a 2-D array traverse to decode. For encoding only a flat array search method has been used. In spirit, the key idea to encode has been inspired from an answer in [stack exchange](https://stackoverflow.com/a/28046691).

## Installation
Simple clone the repository to your local machine.

## Usage

### Basic Array algorithm
Run the below command once in directory:
```bash
./bin/convert 
```
This code outputs a decoded morse message and encoded ASCII msg hard coded in main.c

### Binary Tree algorithm
Run the command below, this executable accepts parameters as shown:
```bash
./bin/convert "<Your ASCII(in CAPS) msg or Morse Code>"
```
Note : While passing Morse code as a parameter put a space at the end of the code. A reminder to pass the parameter in quotes.

By default the binary outputs the decoded morse code below:
```
--. --- --- -.. ---- .--- --- -... ---- --. ..- -.-- ...
```

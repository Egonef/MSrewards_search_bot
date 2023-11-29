# MSrewards_search_bot

This program automates Bing searches to help easily complete Microsoft Rewards search points.

## Requirements

- Linux Operating System
- C++ Compiler (like g++)
- Firefox installed
- Bash (The script `MozillaSBot.sh` is written in Bash, so it won't work on Windows)

## Compilation

To compile the program, navigate to the directory containing the `launchbot.cpp` file and run the following command:

```bash
g++ launchbot.cpp -o launchbot
```

This will create an executable named `launchbot`.

## Usage

To run the program, simply execute the following command in the terminal:

```bash
./launchbot
```

The program will generate 30 random strings and perform a Bing search for each of them, with a 6-second interval between each search.

## Note

This program was created for educational and demonstration purposes. Misuse of this program to violate the terms of service of Microsoft Rewards is the user's responsibility.
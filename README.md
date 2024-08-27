
# Cricket Data Analysis in C++

## Project Overview

This project provides a comprehensive analysis of One Day International (ODI) cricket players based on various statistical data. The program reads data from a CSV file, processes it, and allows users to search and sort players based on specific criteria such as runs scored, batting average, career span, and more.

## Features

- **Search by Highest Score**: Users can search for players based on their highest scores.
- **Player Name Search**: Search for specific players by name.
- **Career Span Analysis**:
  - Players who started their careers after a certain year.
  - Players whose careers fall between two specified years.
  - Players who started their careers before a given year.
- **Hundreds, Fifties, and Zeros Count**: Analyze the total number of hundreds, fifties, and zeros for players from a specific country.
- **Alphabetical Search by Country**: View players from a specific country listed in alphabetical order.
- **Search by Player from Specific Country**: Search for a specific player from a particular country.
- **Best Player Search Based on Runs**: Find the best players based on the number of runs scored.

## Project Structure

- **main.cpp**: The main C++ file containing the implementation of the project.
- **ODI data.csv**: The dataset used for analysis, containing statistics of various ODI players.

## How to Use

### 1. Prerequisites

Make sure you have the following installed:

- A C++ compiler (e.g., GCC)
- A text editor or IDE (e.g., VS Code, CLion)

### 2. Compiling the Code

Use the following command to compile the code:

```bash
g++ main.cpp -o cricket_analysis
```

### 3. Running the Program

After compiling, run the program using:

```bash
./cricket_analysis
```

### 4. Interacting with the Program

Once the program starts, you will be presented with a menu of options. You can select any option by entering the corresponding number. For example:

- Press `1` to search players by the highest score.
- Press `2` to search for a specific player by name.
- Press `3` to analyze players based on their career spans.

Follow the on-screen prompts to enter the required information (e.g., year, player name, country name).

## Code Structure

- **read_file**: Reads and processes data from the `ODI data.csv` file.
- **printArray**: Various overloaded functions to print arrays in different formats.
- **betweentwoyear**: Filters and displays players who played between two specified years.
- **Main Menu**: A loop that allows users to choose different operations to perform on the data.

## Example Dataset

The dataset used for analysis (`ODI data.csv`) contains the following columns:

- **Player Name**
- **Career Span**
- **Matches Played**
- **Innings Played**
- **Not Outs**
- **Runs Scored**
- **Highest Score**
- **Batting Average**
- **Balls Faced**
- **Strike Rate**
- **Hundreds Scored**
- **Fifties Scored**
- **Ducks (Zeros)**

## Contributing

Feel free to fork this repository and submit pull requests if you'd like to contribute to the project.

## License

This project is licensed under the MIT License.


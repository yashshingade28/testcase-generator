# Testcase Generator

This is a C++ program for generating testcases for algorithmic problems. The program is designed to generate multiple test cases, each with different constraints, in a single execution.

## Getting Started
### Prerequisites
To run this program, you'll need to have the following installed:
- C++ compiler
- git
- CLI tools for the execution of the language you've written your solution in

### Installation
```bash
git clone https://github.com/yashshingade28/testcase_generator.git
```
### Usage

To generate testcases, follow these steps:
1) Open the generator.cpp file and set the values of `nooftests` and `noofvars` according to the number of test cases and variables you need for your problem.
2) Set the constraints for each test case in the `constraint` array. The `constraint` array is a 3D array of integers, where the first dimension represents the test case number, the second dimension represents the variable number, and the third dimension represents the minimum and maximum values of the variable, respectively. For example, `constraint[i][j][0]` represents the minimum value of the j<sup>th</sup> variable for the i<sup>th</sup> test case, and `constraint[i][j][1]` represents the maximum value of the j<sup>th</sup> variable for the i<sup>th</sup> test case.
3) Write the code to generate the input in the `geninp()` function depending on the input format of the problem.
4) Initialize the `cmd` string in the `genout()` function with the bash command to execute your solution for the problem.
5) Save the file and compile it using your C++ compiler.
6) Run the compiled executable to generate the input and output files in the input and output folders respectively.

The generated input files will be named inp0.txt, inp1.txt, and so on, while the output files will be named out0.txt, out1.txt, and so on. You can modify the naming convention by changing the `inp` & `out` strings in the `main()` function.

### Example
You can check out the example folder for an example on how to use the generator, it contains testcase generation for a sample problem - given two integers output their sum.

## Contributing
If you'd like to contribute to this project, feel free to fork the repository and submit a pull request.

## License
This project is licensed under the MIT License - see the LICENSE.md file for details.

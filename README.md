# SE282-assignment2
This repository details my assignment attempt for SOFTENG282 Assignment 2

## File structure
For best results, use [Visual Studio Code](https://code.visualstudio.com/) to browse this repository. My explanations are written in these Markdown (`.md`) files which you are currently reading. To display them as intended, click the "Open Preview to the side" button and drag the preview to the main window, or on Windows machines, `Ctrl+Shift+V` (Shortcuts will differ on different operating systems).

    assets
    > Contains image assets for these Markdown files
    AssignmentBrief.pdf
    > Contains the given assignment brief
    Derivations.md
    > Contains derivations for the sum of Fibonacci number as well as for the [1, 92] limit
    fibonacciUpTo50.xlsx
    > The Excel sheet that I worked with to establish the sum of Fibonacci numbers relationship as well as input limits.
    helper.h
    > Contains the fibonacci, fibonacciSum and gcd functions which are used in the prompter and test files
    prompter.c
    > Contains the C file which creates the prompt system allowing you to use your own inputs
    README.md
    > You're reading it right now.
    test.c
    > Contains the test cases used to test correctness and functionality of the functions in helper.h

    

## Compilation instructions
To compile the prompter which fulfills the assignment requirements, run the following command, which will create a `prompter` excecutable in this repository.

```
gcc prompter.c -o prompter
```
Using your shell of choices, run the program by simply typing `prompter` in the Windows Command Prompt or `.\prompter` in Powershell.

You can replace all instances `prompter` with `test` to generate and run a `test` excecutable.

I have only tested with `gcc` on x64 Windows 11. Use other compilers with caution (and probably not with the same commands!)

## Notes and credits

Yes, this code isn't memory-safe. [This isn't xz though.](https://nvd.nist.gov/vuln/detail/CVE-2024-3094)

Special thanks to Paul Denny who taught the cohort how to (write) C and whose knowlege I have used to write these files.
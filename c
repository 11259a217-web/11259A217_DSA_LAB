name: Run DSA C Program

on:
  push:
  workflow_dispatch:

jobs:
  run-c-program:
    runs-on: ubuntu-latest

    steps:
      - name: Get source code
        uses: actions/checkout@v4

      - name: Compile C program
        run: gcc -Wall array_operations.c -o program

      - name: Execute C program
        run: ./program

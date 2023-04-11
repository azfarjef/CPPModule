# C++ Module

This repository is an introduction to C++ module by École 42. This repository contains 9 submodules, each representing the main concept of the C++ programming language. The submodules are organized as follows:

- **CPP00** : Covers namespaces, classes, member functions, stdio streams, initialization lists, static, const, and some other basic stuff.
- **CPP01** : Covers memory allocation, pointers to members, references and switch statement.
- **CPP02** : Covers ad-hoc polymorphism, operator overloading and Orthodox Canonical class form.
- **CPP03** : Covers class inheritance
- **CPP04** : Covers subtype polymorphism, abstract classes and interfaces.
- **CPP05** : Covers repetition and exceptions.
- **CPP06** : Covers C++ casts.
- **CPP07** : Covers C++ templates.
- **CPP08** : Covers templated containers, iterators and algorithms.

Each submodule contains exercises to help you practice and reinforce the main concepts.

## Getting Started

To get started with this repository, clone it to your local machine:
```bash
git clone https://github.com/azfarjef/CPPModule.git
```
You can then navigate to each submodule and explore the exercises.

## Compiling the exercises

Each exercise in the submodules contains a Makefile for compilation. To compile an exercise, navigate to its directory and run the `make` command:
```bash
cd CPP00/ex00
make
```
This will compile the exercise and generate an executable file that you can run:
```bash
./megaphone
```

## Cleaning Up
To clean up the compiled files, run the `make fclean` command:
```bash
make fclean
```
This will remove the generated executable and object files.

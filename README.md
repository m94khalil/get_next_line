# Get Next Line Implementation

## 🚀 Introduction

This functionality enables smooth line-by-line reading from file descriptors. The implementation comes equipped with utility functions for string manipulation and memory management.

## 📁 Project Structure

- **`get_next_line.c`**: Core implementation of the `get_next_line` function.
- **`get_next_line.h`**: Header file containing function prototypes and necessary includes.
- **`get_next_line_utils.c`**: Utility functions for string manipulation and memory management.
- **`get_next_line_bonus.c`** and **`get_next_line_bonus.h`**: Bonus files for additional features (support for multiple descriptors).

## 🛠️ Usage

To integrate the `get_next_line` function into your project, include the `get_next_line.h` header, and link with the appropriate source file(s).

## ✨ Features

- Efficient line-by-line reading from file descriptors.
- Support for handling multiple descriptors with minimal resource leaks.
- Bonus files for additional features (`get_next_line_bonus.c` and `get_next_line_bonus.h`).

## 🌟 Example

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main() {
    int fd = open("text.txt", O_RDONLY);
    char *line = get_next_line(fd);
    printf("%s|", line);
    close(fd);
    return 0;
}

package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
)

func main() {

	file, err := os.Open("input.txt")

	if err != nil {
		log.Fatalf("Error when opening file: %s", err)
	}

	fileScanner := bufio.NewScanner(file)
	for fileScanner.Scan() {
		fmt.Println(fileScanner.Text())
	}

	if err := fileScanner.Err(); err != nil {
		log.Fatalf("Error while reading file: %s", err)
	}

	file.Close()
}
package main

import (
	"fmt"
    "io/ioutil"
)

func main() {
    // read the whole file at once
    b, err := ioutil.ReadFile("input.txt")
    if err != nil {
        panic(err)
    }
    // print the whole body at once
    fmt.Print(string(b))
}
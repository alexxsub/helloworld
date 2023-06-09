## compile c example and run
```bash
gcc hello.c -o hello
./hello
```

## run python
```bash
python3 hello.py
```

## run node.js
```bash
node hello.js
```

## compile java and run
```bash
javac hello.java
java Hello
```

## run bash
```bash
./hello.sh
```

## run go
```bash
go run hello.go
```

## compile and run go
```bash
go build -o gohello gohello.go
./gohello
```

## testing time with read 1 millon records from file
## generate file input.txt 
```bash
for i in {1..1000000} ; do echo -e $i ;  done > input.txt
```
## count lines in file
```bash
cat input.txt |wc -l
```
## size of file
```bash
cat input.txt |wc -c
```

## compile c++
```bash
 g++ read.cc -o read
```

```bash
time ./goread>/dev/null              0m5.499s
time go run runread.go>/dev/null     0m5.913s
time ./goread2>/dev/null             0m0.126s
time go run read2.go>/dev/null       0m0.063s

time ./read>/dev/null                0m3.309s  # c++
time ./read2>/dev/null               0m0.137s
time ./read3>/dev/null               0m7.124s
time ./read4>/dev/null               0m0.130s
time ./read5>/dev/null               0m7.705s
time ./read6>/dev/null               0m0.180s


time java Hello.class>/dev/null      0m8.478s

time node read.js>/dev/null          0m51.625s
time node read2.js>/dev/null         0m51.450s
time node read3.js>/dev/null         0m39.163s
time node read4.js>/dev/null         0m0.294s

time ./read.py >/dev/null            0m0.128s
time ./read2.py >/dev/null           0m14.652s

time ./read.sh >/dev/null            1m22.460s
time ./read2.sh >/dev/null           0m6.176s
time ./read3.sh >/dev/null           0m0.160s
time ./read4.sh >/dev/null           0m40.223s
```
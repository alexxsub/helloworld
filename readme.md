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

## testing time
```bash
time ./goread>/dev/null              0m6.967s
time go run runread.go>/dev/null     0m5.756s
time ./read>/dev/null                0m3.309s  # c++
time java Hello.class>/dev/null      0m8.478s
time node read.js>/dev/null          0m51.625s
time node read2.js>/dev/null         0m51.450s
time node read3.js>/dev/null         0m39.163s
time python3 read.py >/dev/null      0m0.128s
time  ./read.sh >/dev/null           1m22.460s
time  ./read2.sh >/dev/null          0m6.176s
time  ./read3.sh >/dev/null          0m0.160s
time  ./read4.sh >/dev/null          0m40.223s
```
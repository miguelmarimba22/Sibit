# Perspecitva

This is a project, that I create a system bar code of supermarket, i did it with C language and using cmake as compiler

## Dependencies

The Dependencies to compile app, you should execute this command:
```
sudo apt install build-essential
```

For gtk:

```
sudo apt-get install libgtk-3-dev
```

## Command2Compile

to compile this application you need to run it with these commands:


*in the repository directory*

```
cmake .; make
```
or
```
cmake . && make
```
or
```
cmake .
make
```

the target of the compiled app is in `./build/index`

## Remove Residue

To remove residue, you need to run `./Cleaner`

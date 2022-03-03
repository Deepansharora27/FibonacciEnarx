# FibonacciEnarx


# Environment Setup 

To compile this Demo, you must install the following:

#### Rust

Go to [rust-lang.org](https://www.rust-lang.org/tools/install) and follow the instructions using rustup.

#### WebAssembly System Interface (WASI)

Install Wasmtime

```bash
curl https://wasmtime.dev/install.sh -sSf | bash
```

#### Wasmer 

 [Wasmer](https://docs.wasmer.io/) is an open-source runtime for executing WebAssembly on the Server.
 
#### Wasienv

[Wasienv](https://github.com/wasienv/wasienv) is a tool to compile different programming languages to WebAssembly, so you can run your programs on the
Browser, or in the Server.


#### Code 

```
 git clone https://github.com/Deepansharora27/FibonacciEnarx.git
 cd FibonacciEnarx
```

Since the Code has been written in C++, we need to figure out a way to generate a WebAssembly Binary which then we can deploy to an Enarx Keep.
That's why we will be using `wasienv` in order to generate a `.wasm` binary from this `cpp` file.

When you have your `cpp` file created, you can execute `wasic++`

```
 wasic++ Fibonacci -o FibonacciBinary.wasm
```

Now, you will have a new `FibonacciBinary.wasm` file ready in your Directory and thus now you can successfully deploy it in an Enarx Keep.

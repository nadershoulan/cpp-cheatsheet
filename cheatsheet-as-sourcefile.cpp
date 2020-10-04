           + fib(i-2);
};
future<int> fut =         // result of async function
        async(launch::async, fib, 4); // start async function in other thread
// do some other work 
cout << fut.get();        // get result of async function. Wait if needed.

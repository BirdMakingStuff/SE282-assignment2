# Derivations

## Deriving the sum of the Fibonacci numbers
Initially, I created an Excel sheet of the first 50 Fibonacci numbers and their sums (`fibonacciUpTo50.xlsx`). With the help of a [StackOverflow post](https://math.stackexchange.com/questions/1211909/sum-of-fibonacci-numbers), there was a relationship established between the sum of the Fibonacci numbers and a later Fibonacci number.

![](assets\sumfibonacci.png)

Specifically: let $f(n)$ represent the Fibonacci number function where $n \in \mathbb{N}$, $f(0) = 0$, $f(1) = 1$ and for $n \geq 2, f(n) = f(n - 1) + f(n - 2)$ (from the SOFTENG 282 coursebook). The relationship found was:
$$\sum^{n}_{i=0} f(i) = f(n+2)- 1 $$

This relationship can be proved by weak induction. First we will establish the base cases for $n=0$ and $n=1$:
$$ \sum^{0}_{i=0} f(i) = f(2) - 1 = 1 - 1 = 0 \ \checkmark$$
$$ \sum^{1}_{i=0} f(i) = f(3) - 1 = 2 - 1 = 1 \ \checkmark$$

Then, we will perform the inductive step. Assuming that $\exists k \in \mathbb{N}, k \geq 2$ and so $n = k$:
$$\sum^{k}_{i=0} f(i) = f(k+2) - 1$$

Now for the case of $n = k + 1$:
$$\sum^{k+1}_{i=0} f(i)$$
$$= \sum^{k}_{i=0} f(i) + f(k+1)$$
$$= f(k+2) - 1 + f(k+1) \text{ (substitution)}$$
$$= \underbrace{f(k+2) + f(k+1)}_{=f(k+3)} - 1 \text{ (rearranging equation)}$$
$$= f(k+3) - 1 \text{ (definition of } f \text{)}$$
$$= f((k+1)+2) - 1$$

and thus the relationship is proven by the inductive principle.

This is implemented in the `fibonacciSum` function.

## Limiting inputs $A, B$ to between 1 and 92

To ensure the maximum possible range for the inputs, the output for `fibonacciSum` is of the type `unsigned long long` which allows for the maximum number representation to be $18446744073709551615$ [(see here)](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf).

I decided to brute-force the result in Excel by calculating Fibonacci numbers and the sum of all Fibonacci numbers up to and including $n = 100$. With this, I was able to quickly figure out that the last possible value of $n$ before the numerical representation of the sum of the Fibonacci numbers would become unreliable is $91$. However, as the assignment brief demonstrates, $0$ is included in the first $1$ Fibonacci numbers, and so we need to subtract $1$ from our inputs of $A$ and $B$ to achieve the desired results.

![](assets\ninetytwolimit.png)

For fun, I tried to input $A=93, B=92$ into my program to see what would happen. The program calculated the incorrect Fibonacci sum for $A$ and took extremely long time calculating the $\text{gcd}$ (I cancelled it before a result was produced).
```
Enter an input for A: 93
Enter an input for B: 92
The sum of the first 93 and 92 Fibonacci numbers are 1293530146158671550 and 12200160415121876737, respectively.
Now let's fine what gcd(1293530146158671550, 12200160415121876737) is!
```
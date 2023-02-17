# Library Contents

## Vector 3D
 * Vector class containing 3 _float_ values `(x, y, z)` which can be altered in the following situations:<br/>
 * All _arithmetic_ operators `(+, +=, -, -=, *, *=)` with a special one being `=%` which is written as the cross product of the vector. In addition to the _arithmetic_ operators, the out operator `(<<)` is also implemented including the assignment operator `(=)`
 * **Magnitude, angle, unit, projection, scalar projection** functions are also implemented for this class

## Vector 2D:
 * Vector class containing 2 float values `(x, y)`
 * **(has the same features as a 3D vector with the exception of `cross product`)**


## Matrix:
 * Matrix _data structure_ with _rows_ and _columns_
 * Has the following features
 * * Subscript operators ( returns the data at the specified _row_ and _column_) `()`
 * * Assignment operator `(=)`
 * * sum operator `(+)`
 * * multiply operator `(*)`
 * * out operator `(<<)`
 * * `fill(double)` function, as the name suggests it fills the entire vector with a specified double value
 * * `setIdentity()` gives the matrix a special identity
 * * `setValueAt()` does exactly what the name suggests

## Math Functions
 * Simple mathematics functions
 * * `abs(x)` -> returns absolute value of _**x**_
 * * `bin(x)` -> returns binary value of decimal number _**x**_
 * * `hypot(a, b)` -> returns the hypotenuse of a right triangle if given the 2 catheti
 * * `isqrt(x)` -> returns the fast inverse square root i.e. $\frac{1}{sqrt(x)}$
 * * `pow(a, b)` -> returns $a^b$
 * * `sqrt(x)` -> returns $sqrt{x}$ 
 * * `exp(x)` -> returns $e^x$ $\overrightarrow{}$ $e = 2.71828182845904523536$ `(eulers number)`
 * * `exp2(x)` -> returns $2^x$


## Mathematical Constants (constants.hpp)
* ### Containts mathematical constants such as $\pi$ and $e$
* ### Also contains $\frac{\pi}{2}$, $\frac{\pi}{4}$, $\frac{1}{\pi}$ and $\frac{2}{\pi}$
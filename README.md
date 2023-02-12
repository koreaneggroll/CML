# CML
C Maths Library


## Implemented:
* 2D Vector
* 3D Vector
* Matrices


## Examples:
* No. 1:
    ```c++

    //This example is the same with `Vector3D`

    #include "vector2d.hpp"

    int main(void){
        cml::Vector2 vector(5.10, 15.5);
        cml::Vector2 vector2(20.15, 30.3);

        std::cout << vector + vector2 << "\n"; // => [25.25, 45.80]

        return 0;
    }

    ```

* No. 2:
    ```c++
    #include "matrix.hpp"

    int main(void){
        cml::Matrix matrix1(3, 3);
        cml::Matrix matrix2(3, 3);

        matrix1.fillRandom();
        std::cout << matrix1 << "\n";       /* 
                                                    8.3  8.6  7.7
                                                    1.5  9.3  3.5
                                                    8.6  9.2  4.9
                                            */
        matrix2.fillRandom();
        std::cout << matrix2 << "\n";       /*
                                                    2.1  6.2  2.7
                                                    9.0  5.9  6.3
                                                    2.6  4.0  2.6
                                            */

        std::cout << "matrix1 + matrix2 = " << "\n";

        std::cout << matrix1 + matrix2;     /*
                                                    10.4 14.8 10.4
                                                    10.5 15.2  9.8
                                                    11.2 13.2  7.5
                                            */

        return 0;
    }

    ```
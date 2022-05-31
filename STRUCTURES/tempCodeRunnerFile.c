typedef struct
{
    float real;
    float imag;
} _COMPLEX;
void swap(_COMPLEX a, _COMPLEX b)
{

    _COMPLEX tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void print(_COMPLEX a)
{
    printf("(%f,%f) \n", a.real, a.imag);
}
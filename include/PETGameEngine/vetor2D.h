#ifndef _VETOR2D_H
#define _VETOR2D_H

#include <cmath>
#include <string>
#include <sstream>

using std::string;
using std::stringstream;


float grausToRad(float graus);
float radToGraus(float radianos);


class Vetor2D
{
    private:
        float x,y;
    public:

        static const Vetor2D ZERO;


        //default constructor
        Vetor2D();
        Vetor2D(float x,float y);
        Vetor2D(float angle);

        //Multiplica��o por escalar(transforma��o linear dilata��o)
        void operator*= (float k);


        Vetor2D operator* (float k);

        //Divis�o por escalar(transforma��o linear retra��o)

        void operator/= (float k);

        Vetor2D operator/ (float k);

        //Soma de vetores

        void operator+= (Vetor2D other);

        Vetor2D operator+ (Vetor2D other);

        void operator-= (Vetor2D other);
        Vetor2D operator- (Vetor2D other);

        //Sobrecarga para atribui��o

        void operator= (Vetor2D other);

        //Sobrecargas para compara��o

        bool operator== (Vetor2D other);

        bool operator!= (Vetor2D other);

        //Transforma��o linear rotac�o

        Vetor2D rotate(float degrees);

        //Retorna a norma de this
        float getNorma();
        void setNorma(float norma);

        //Retorna o vetor de norma 1 de mesma dire��o de this
        Vetor2D normalizar();

        //Retorna a proje��o ortogonal de this sobre other
        Vetor2D proj(Vetor2D other);

        float prodInterno(Vetor2D other);

        //Angulo entre this e o eixo X
        float getAngle();
        void setAngle(float angle);



        //Angulo entre this e outro vetor
        float angleBetween(Vetor2D other);




        void setX(float x);
        float getX();

        void setY(float y);
        float getY();


        string toString();





        virtual ~Vetor2D();



};

#endif // _VETOR2D_H

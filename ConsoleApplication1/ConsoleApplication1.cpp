// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>
#include <string>

using namespace std;
class Atleta // Definir clase Atleta
{

protected:
    int energia;
    float velocidad;
    int fuerza;
    std::string nombre;

public:
    virtual void AumentaVel()
    {
        velocidad++;
        energia--;

    }
    //constructor generico
    Atleta()
    {
        energia = 20;
        velocidad = 20;
        fuerza = 20;
        nombre = "generico";

    }
    //constructorgenerico
    Atleta(int E, float V, int F, string N)
    {
        energia = E;
        velocidad = V;
        fuerza = F;
        nombre = N;
    }
    ~Atleta() {
        cout << nombre << " ha sido destruido" << endl;
    }
    //setter Permite modificar atributo
    void SetVelocidad(float V)
    {
        velocidad = V;
    }
    //Get permite leer el valor del atributo
    float Getvelocidad()
        {
            return velocidad;
        }
    //energia
    void Setenergia(int E)
        {
            energia = E;
        }
    int Getenergia()
    {
        return energia;
    }
    //fuerza
    void Setfuerza(int F)
    {
        fuerza = F;

    }
    int Getfuerza()
    {
        return fuerza;
    }

    void Setnombre(string N)
    {
        nombre = N;
    }
    string Getnombre()
    {
        return nombre;
    }
    
};



class Boxeador : public Atleta
{
protected:
    int PeleasGanadas;
    int PeleasPerdidas;
    int PeleasEmpatadas;
    int KOS;

public:
    Boxeador() : Atleta()
    {
        PeleasGanadas = 0;
        PeleasPerdidas = 0;
        PeleasEmpatadas = 0;
        KOS = 0;
    }

    Boxeador(int E, float V, int F, string N, int g, int p, int emp, int k)
    {
        energia = E;
        velocidad = V;
        fuerza = F;
        nombre = N;
        PeleasGanadas = g;
        PeleasPerdidas = p;
        PeleasEmpatadas = emp;
        KOS = k;
    }
    ~Boxeador()
    {
        cout << nombre << " ha sido derrotado" << endl;
    }

    void SetGanados(int g)
    {
        PeleasGanadas = 0;
    }
    int GetGanadas()
    {
        return PeleasGanadas;
    }

    void SetPerdidas(int p)
    {
        PeleasPerdidas = 0;

    }

    int GetPerdidas()
    {
        return PeleasPerdidas;
    }

    void SetEmpatadas(int emp)
    {
        PeleasEmpatadas = 0;
    }

    int GetEmpatadas()
    {
        return PeleasEmpatadas;
    }
    void SetKOS()
    {
        KOS = 0;

    }
    int GetKOS(int k)
    {
        return KOS;
    }

};

class Futbolista : public Atleta
{
protected:
    int Goles;
    int Asistencias;
    int PartidosJugados;
    
    
public:

    void AumentaVel() override
    {
        velocidad += 10;
        energia -= 5;
    }

    Futbolista() : Atleta()
    {
        Goles = 0;
        Asistencias = 0;
        PartidosJugados = 0;

    }

    Futbolista(int E, float V, int F, string N, int G, int A, int PJ)
    {
        energia = E;
        velocidad = V;
        fuerza = F;
        nombre = N;
        Goles = G;
        Asistencias = A;
        PartidosJugados = PJ;

    }
    ~Futbolista()
    {
        cout << nombre << " ha sido derrotado" << endl;
    }

    void setGoles(int G)
    {
        Goles = 0;  
    }
    int getGoles()
    {
        return Goles;
    }
    void setAsistencias(int A)
    {
        Asistencias = 0;
    }
    int getAsistencias()
    {
        return Asistencias;
    }
    void setPartidosJugados(int PJ)
    {
        PartidosJugados = 0;
    }
    int getPartidosJugados()
    {
        return PartidosJugados;
    }
};

class Ciclista : public Atleta
{
protected:
    int CarrerasGanadas;
    int CarrerasPerdidas;
    int CarrerasNF;
    int TiempoRecord;

public:

    void AumentaVel() override
    {
        velocidad += 100;
        energia -= 2;
    }
    Ciclista() : Atleta()
    {
        CarrerasGanadas = 0;
        CarrerasPerdidas = 0;
        CarrerasNF = 0;
        TiempoRecord = 0;
    }

    Ciclista(int E, float V, int F, string N, int CG, int CP, int CNF, int TR)
    {
        energia = E;
        velocidad = V;
        fuerza = F;
        nombre = N;
        CarrerasGanadas = CG;
        CarrerasPerdidas = CP;
        CarrerasNF = CNF;
        TiempoRecord = TR;

    }

    ~Ciclista()
    {
        cout << nombre << " ha sido derrotado" << endl;
    }

    void setCarrerasGanadas(int CG)
    {
        CarrerasGanadas = 0;

    }
    int getCarrerasGanadas()
    {
        return CarrerasGanadas;
    }
    void setCarrerasPerdidas(int CP)
    {
        CarrerasPerdidas = 0;

    }
    int getCarrerasPerdidas()
    {
        return CarrerasPerdidas;
    }
    void setCarrerasNF(int CNF)
    {
        CarrerasNF = 0;

    }
    int getCarrerasNF()
    {
        return CarrerasNF;
    }
    void setTiempoRecord(int TR)
    {
        TiempoRecord = 0;
    }
    int getTiempoRecord()
    {
        return TiempoRecord;
    }
};

class Corredor : public Atleta
{
protected:
    int CarrerasWins;
    int CarrerasLoose;
    int CarrerasNT;
    int TiempoRecordd;

public:

    void AumentaVel() override
    {
        velocidad += 30;
        energia -= 3;
    }
    Corredor() : Atleta()
    {
        CarrerasWins = 0;
        CarrerasLoose = 0;
        CarrerasNT = 0;
        TiempoRecordd = 0;
    }

    Corredor(int E, float V, int F, string N, int CW, int CL, int CNT, int TRR)
    {
        energia = E;
        velocidad = V;
        fuerza = F;
        nombre = N;
        CarrerasWins = CW;
        CarrerasLoose = CL;
        CarrerasNT = CNT;
        TiempoRecordd = TRR;

    }

    ~Corredor()
    {
        cout << nombre << " ha sido derrotado" << endl;
    }

    void setCarrerasWins(int CW)
    {
        CarrerasWins = 0;
    }
    int getCarrerasWins()
    {
        return CarrerasWins;
    }
    void setCarrerasLoose(int CL)
    {
        CarrerasLoose = 0;
    }
    int getCarrerasLoose()
    {
        return CarrerasLoose;
    }
    void setCarrerasNT(int CNT)
    {
        CarrerasNT = 0;
    }
    int getCarrerasNT()
    {
        return CarrerasNT;
    }
    void setTiempoRecordd(int TRR)
    {
        TiempoRecordd = 0;
    }
    int getTiempoRecordd()
    {
        return TiempoRecordd;
    }

};



void main()
{
    //constructor especifico
    Atleta Messi(150, 500, 70, "Leo");
    cout << Messi.Getnombre() << endl;
    cout << "fuerza = " << Messi.Getfuerza() << endl;
    cout << "velocidad = " << Messi.Getvelocidad() << endl;
    cout << "energia = " << Messi.Getenergia() << endl << endl;

    //constructor generico
    Atleta Pato;
    cout << Pato.Getnombre() << endl;
    cout << "fuerza " << Pato.Getfuerza() << endl;
    cout << "velocidad " << Pato.Getvelocidad() << endl;
    cout << "energia " << Pato.Getenergia() << endl << endl;

    //especifico
    Atleta Cristiano(89, 99, 100, " Ronaldo ");
    cout << Cristiano.Getnombre() << endl;
    cout << " Energia = " << Cristiano.Getenergia() << endl;
    cout << "Velocidad = " << Cristiano.Getvelocidad() << endl;
    cout << "Fuerza = " << Cristiano.Getfuerza() << endl << endl;

    //generico
    Atleta Julio;
    cout << Julio.Getnombre() << endl;
    cout << "energia = " << Julio.Getenergia() << endl;
    cout << " velocidad = " << Julio.Getvelocidad() << endl;
    cout << " fuerza = " << Julio.Getfuerza() << endl << endl;

    /// <summary>
    /// 
    /// </summary>
    Atleta* Pitbull = new Atleta(100, 100, 500, "Pitbull Cruz");
    Pitbull->AumentaVel();
    cout << "Nombre " << Pitbull->Getnombre() << endl << endl;
    cout << "energia = " << Pitbull->Getenergia() << endl << endl;
    cout << "velocidad = " << Pitbull->Getvelocidad() << endl << endl;
    cout << "fuerza = " << Pitbull->Getfuerza() << endl << endl;
    delete Pitbull;


    Atleta* Canelo = new Atleta(200, 200, 600, "Canelo Alvarez");
    Canelo->AumentaVel();
    cout << "Nombre " << Canelo->Getnombre() << endl << endl;
    cout << "energia = " << Canelo->Getenergia() << endl << endl;
    cout << "velocidad = " << Canelo->Getvelocidad() << endl << endl;
    cout << "fuerza = " << Canelo->Getfuerza() << endl << endl;

    Atleta* Brandon = new Atleta(100, 100, 400, "Brandon Moreno");
    Brandon->AumentaVel();
    cout << "Nombre " << Brandon->Getnombre() << endl << endl;
    cout << "energia = " << Brandon->Getenergia() << endl << endl;
    cout << "velocidad = " << Brandon->Getvelocidad() << endl << endl;
    cout << "fuerza = " << Brandon->Getfuerza() << endl << endl;

    Boxeador *Chavez = new Boxeador(150, 150, 150, "Julio Cesar Chavez", 107, 6, 2, 87);
    cout << "Nombre " << Chavez->Getnombre() << endl << endl;


    //POLIMORFISMO-------------------------------------------------------------------------------
    Futbolista *CR7 = new Futbolista(100, 80, 99, "Cristiano Ronaldo", 885, 283, 1215);
    cout << "Nombre " << CR7->Getnombre() << endl << endl;


}








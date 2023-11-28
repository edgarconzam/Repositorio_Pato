// ProyectoJuegoDeDesiciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Constantino

#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>



using namespace std;

void opcionEntrenamiento(int opcion) {
    setlocale(LC_ALL, "es_MX.UTF-8");
    if (opcion == 1) {
        cout << "Pato se enfoca en perfeccionar su habilidad técnica. Se convierte en un mago con el balón.\n";
    }
    else if (opcion == 2) {
        cout << "Pato desarrolla la estrategia de juego. Se convierte en un jugador astuto y táctico.\n";
    }
}

void opcionRelaciones(int opcion) {
    setlocale(LC_ALL, "es_MX.UTF-8");
    if (opcion == 1) {
        cout << "Pato forja amistades cercanas. Su red de apoyo resulta invaluable en los momentos difíciles.\n";
    }
    else if (opcion == 2) {
        cout << "Pato se centra en la competencia. Su distancia emocional lo mantiene enfocado en la mejora personal.\n";
    }
}

void opcionOfertaEquipo(int opcion) {
    setlocale(LC_ALL, "es_MX.UTF-8");
    if (opcion == 1) {
        cout << "Pato decide quedarse en la academia y rechazar la oferta. Continúa su desarrollo enfrentando desafíos y logrando éxitos notables.\n";
    }
    else if (opcion == 2) {
        cout << "Pato acepta la nueva oportunidad. Se encuentra en un nuevo equipo y una nueva ciudad, enfrentando un entorno más competitivo.\n";
    }
}

void decisionFinal(int opcion) {
    setlocale(LC_ALL, "es_MX.UTF-8");
    if (opcion == 1) {
        cout << "Pato acepta la oferta internacional. Su carrera alcanza nuevas alturas, enfrentando la fama y las expectativas constantes.\n";
    }
    else if (opcion == 2) {
        cout << "Pato rechaza la oferta internacional. Opta por permanecer en su equipo actual o en la academia, valorando la estabilidad y la conexión con su comunidad.\n";
    }
}
void adaptarseAlNuevoEntorno(int opcion) {
    setlocale(LC_ALL, "es_MX.UTF-8");
    if (opcion == 1) {
        cout << "Pato se integra rápidamente en su nuevo equipo. Su actitud positiva y habilidad innata lo destacan.\n";
    }
    else if (opcion == 2) {
        cout << "Pato enfrenta desafíos de adaptación, pero su tenacidad lo impulsa a superar obstáculos y crecer como jugador.\n";
    }
}

void rendimientoEnNuevoEquipo(int opcion) {
    setlocale(LC_ALL, "es_MX.UTF-8");
    if (opcion == 1) {
        cout << "Pato brilla en el campo, convirtiéndose en una pieza clave del equipo. Su reputación crece, y se convierte en favorito de los fanáticos y compañeros de equipo.\n";
    }
    else if (opcion == 2) {
        cout << "Pato enfrenta desafíos en el nuevo equipo, pero su perseverancia eventualmente lo lleva a destacarse a pesar de las dificultades iniciales.\n";
    }
}

void confrontacionConCompanero(int opcion) {
    setlocale(LC_ALL, "es_MX.UTF-8");
    if (opcion == 1) {
        cout << "Pato decide abordar el problema con su compañero de equipo. Tienen una conversación sincera, resuelven sus diferencias y fortalecen su relación en el campo.\n";
    }
    else if (opcion == 2) {
        cout << "Pato elige ignorar la confrontación y se centra en su propio rendimiento. Aunque evita el conflicto, la relación con su compañero de equipo se vuelve tensa y afecta al equipo.\n";
    }
}

void nuevoDesafioEnLaCarrera(int opcion) {
    setlocale(LC_ALL, "es_MX.UTF-8");
    if (opcion == 1) {
        cout << "Pato decide enfrentar el nuevo desafío con determinación. Su ética de trabajo y enfoque le permiten superar el obstáculo, ganando respeto y admiración.\n";
    }
    else if (opcion == 2) {
        cout << "Pato elige buscar ayuda para superar el nuevo desafío. Colabora con sus compañeros de equipo y entrenadores, aprendiendo nuevas habilidades y fortaleciendo la unidad del equipo.\n";
    }
}

void nuevaOportunidadInternacional(int opcion) {
    setlocale(LC_ALL, "es_MX.UTF-8");
    if (opcion == 1) {
        cout << "Pato recibe una nueva oportunidad internacional para representar a su país en un torneo de renombre. Acepta con entusiasmo, llevando su juego a un nivel aún más alto.\n";
    }
    else if (opcion == 2) {
        cout << "Pato decide concentrarse en su equipo actual y rechaza la oportunidad internacional. Prefiere consolidar su legado en su club y contribuir a su éxito.\n";
    }
}

void lesionesEnLaCarrera(int opcion) {
    setlocale(LC_ALL, "es_MX.UTF-8");
    if (opcion == 1) {
        cout << "Pato sufre una lesión grave en el campo. Aunque enfrenta momentos difíciles durante la rehabilitación, su determinación lo lleva a una recuperación exitosa.\n";
    }
    else if (opcion == 2) {
        cout << "Pato logra evitar lesiones graves y mantiene su condición física a través de un régimen de entrenamiento cuidadoso. Su dedicación lo mantiene en la cima de su juego.\n";
    }
}

void decisionImportante(int opcion) {
    setlocale(LC_ALL, "es_MX.UTF-8");
    if (opcion == 1) {
        cout << "Pato enfrenta una decisión trascendental en su carrera: cambiar de posición en el campo. Deja de ser delantero y se convierte en defensor, desafiando sus límites y demostrando su versatilidad.\n";
        cout << "Esta decisión estratégica no solo fortalece la defensa del equipo, sino que también destaca la adaptabilidad de Patp. Aunque enfrenta desafíos, su dedicación a aprender una nueva posición inspira a sus compañeros y entrenadores.\n";
    }
    else if (opcion == 2) {
        cout << "Pato decide asumir la responsabilidad de ser el capitán del equipo. Su liderazgo inspirador y ética de trabajo incansable impulsan al equipo hacia nuevos logros.\n";
        cout << "Convertirse en capitán no solo eleva el juego de Pato, sino que también fomenta la unidad y la determinación en el equipo. Bajo su liderazgo, el equipo enfrenta desafíos con confianza y logra victorias notables.\n";
    }
}

void eventoInesperado(int opcion) {
    setlocale(LC_ALL, "es_MX.UTF-8");
    if (opcion == 1) {
        cout << "Pato se encuentra con un antiguo rival que ahora es su compañero de equipo. La rivalidad pasada se convierte en una amistad sólida, demostrando que el fútbol puede unir a las personas.\n";
        cout << "La reconciliación con su antiguo rival crea una dinámica única en el equipo. Juntos, superan las diferencias del pasado y demuestran que la camaradería puede surgir de los lugares más inesperados.\n";
    }
    else if (opcion == 2) {
        cout << "Pato descubre un talento oculto para la enseñanza. Comienza a entrenar a jugadores más jóvenes en la academia, transmitiendo su conocimiento y experiencia.\n";
        cout << "El compromiso de Pato con la formación de nuevos talentos no solo beneficia a los jóvenes jugadores, sino que también fortalece la cultura de desarrollo en la academia. Su contribución se reconoce en la comunidad futbolística.\n";
    }
}

void momentoCumbre(int opcion) {
    setlocale(LC_ALL, "es_MX.UTF-8");
    if (opcion == 1) {
        cout << "Pato llega a la final de un torneo importante con su equipo. El partido es una batalla intensa que culmina en una victoria épica, llevando a Pato y su equipo a la cima.\n";
        cout << "La victoria en la final no solo representa el éxito personal de Pato, sino que también consolida la posición de su equipo como uno de los mejores. La celebración es apoteósica, y Pato se convierte en una leyenda del club.\n";
    }
    else if (opcion == 2) {
        cout << "Pato se enfrenta a su antiguo mentor en un emocionante enfrentamiento en el campo. Aunque el mentor representa un desafío formidable, Pato demuestra su progreso y gana el respeto del mentor.\n";
        cout << "La competencia contra su mentor es un hito crucial en la carrera de Pato. La victoria no solo demuestra su crecimiento, sino que también fortalece la conexión entre mentor y aprendiz, creando un lazo duradero.\n";
    }
}

void retiroDelFutbol(int opcion) {
    setlocale(LC_ALL, "es_MX.UTF-8");
    if (opcion == 1) {
        cout << "Llega el momento del retiro para Pato. Se despide del fútbol profesional, pero decide seguir involucrado en el deporte como entrenador, compartiendo su sabiduría con las generaciones futuras.\n";
        cout << "El retiro de Pato marca el fin de una era en el campo, pero el inicio de una nueva etapa como mentor. Su legado perdura a través de los jugadores que ha influenciado, y su contribución al fútbol continúa de una forma diferente.\n";
    }
    else if (opcion == 2) {
        cout << "Pato decide prolongar su carrera y juega durante varios años más. Aunque enfrenta desafíos físicos, su pasión por el juego y su dedicación lo mantienen en un alto rendimiento.\n";
        cout << "La decisión de continuar jugando lleva a Pato a nuevos logros. Aunque el tiempo avanza, su impacto en el campo sigue siendo significativo. Su longevidad en el deporte es una inspiración para jugadores jóvenes.\n";
    }
}


int main() {

    int opcion;
    int reiniciar = true;
    setlocale(LC_ALL, "es_MX.UTF-8");

    while (reiniciar == true)
    {


        cout << "Pato, el apasionado futbolista. Se encuentra en los inicios de su carrera futbolista y tiene que tomar desiciones importantes para llegar a ser algo en el ambito futbollistico.\n";

        cout << "Decisión 1: Intensidad del Entrenamiento\n";
        cout << "1. Enfocarse en la Técnica Individual\n";
        cout << "2. Desarrollar la Estrategia de Juego\n";
        cin >> opcion;
        opcionEntrenamiento(opcion);

        cout << "Decisión 2: Relaciones en la Academia\n";
        cout << "1. Forjar Amistades Cercanas\n";
        cout << "2. Enfocarse en la Competencia\n";
        cin >> opcion;
        opcionRelaciones(opcion);

        cout << "Decisión 3: Una Oferta de Otro Equipo\n";
        cout << "1. Permanecer Leal a la Academia\n";
        cout << "2. Aceptar la Nueva Oportunidad\n";
        cin >> opcion;
        opcionOfertaEquipo(opcion);

        cout << "Convergencia: La Gran Decisión Final\n";
        cout << "1. Seguir el Camino de la Fama\n";
        cout << "2. Mantenerse Fiel a sus Raíces\n";
        cin >> opcion;
        decisionFinal(opcion);

        cout << "Pato, el apasionado futbolista, enfrenta nuevas decisiones cruciales en su carrera.\n";


        cout << "Decisión 4: Adaptarse al Nuevo Entorno\n";
        cout << "1. Integrarse Rápidamente\n";
        cout << "2. Enfrentar Desafíos de Adaptación\n";
        cin >> opcion;
        adaptarseAlNuevoEntorno(opcion);

 
        cout << "Decisión 5: Rendimiento en el Nuevo Equipo\n";
        cout << "1. Brillar en el Campo\n";
        cout << "2. Superar Obstáculos\n";
        cin >> opcion;
        rendimientoEnNuevoEquipo(opcion);

        cout << "Después de las intensas decisiones que Pato ha enfrentado, la vida en el equipo continúa:\n";

        cout << "Confrontación con un Compañero de Equipo\n";
        cout << "1. Abordar el problema directamente\n";
        cout << "2. Ignorar la confrontación y centrarse en el rendimiento personal\n";
        cin >> opcion;
        confrontacionConCompanero(opcion);

        cout << "Nuevo Desafío en la Carrera\n";
        cout << "1. Enfrentar el desafío con determinación\n";
        cout << "2. Buscar ayuda para superar el desafío\n";
        cin >> opcion;
        nuevoDesafioEnLaCarrera(opcion);

        cout << "Una Nueva Oportunidad Internacional\n";
        cout << "1. Aceptar la nueva oportunidad internacional\n";
        cout << "2. Concentrarse en el equipo actual y rechazar la oportunidad\n";
        cin >> opcion;
        nuevaOportunidadInternacional(opcion);

        cout << "Lesiones en la Carrera\n";
        cout << "1. Superar una lesión grave\n";
        cout << "2. Mantenerse libre de lesiones graves\n";
        cin >> opcion;
        lesionesEnLaCarrera(opcion);

        cout << "Decisión 6: Decision Importante en la Carrera\n";
        cout << "1. Cambiar de Posición en el Campo\n";
        cout << "2. Convertirse en Capitán del Equipo\n";
        cin >> opcion;
        decisionImportante(opcion);

        cout << "Evento Inesperado\n";
        cout << "1. Reconciliación con un Antiguo Rival\n";
        cout << "2. Descubrimiento del Talento para la Enseñanza\n";
        cin >> opcion;
        eventoInesperado(opcion);

        cout << "Momento Cumbre en la Carrera\n";
        cout << "1. Victoria Épica en la Final de un Torneo\n";
        cout << "2. Enfrentamiento con el Antiguo Mentor\n";
        cin >> opcion;
        momentoCumbre(opcion);

        cout << "Futuro en el Fútbol\n";
        cout << "1. Retiro del Fútbol y Carrera como Entrenador\n";
        cout << "2. Prolongar la Carrera y Seguir Jugando\n";
        cin >> opcion;
        retiroDelFutbol(opcion);


        cout << "¡Fin de la historia!";
        cout << "¿Quieres reiniciar la historia?  1.-si  0.-no\n";      
        cin >> reiniciar;
        system("cls");
    }


    return 0;
}

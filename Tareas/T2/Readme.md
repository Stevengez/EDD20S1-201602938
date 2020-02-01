# Especificacion informal:

### Persona:
Objeto del tipo PERSONA, representa a un usuario que se identifica con un nombre y que puede tener monedas.

Metodos:
    
    getNombre()
Devuelve un valor del tipo String con el nombre de la persona.
        
    quitarMonedas(int c)
        parametros: int c
Resta la cantidad **c** de monedas y devuelve el valor final de monedas de la persona.
    
    sumarMonedas(int c)    
        parametros: int c
Suma la cantidad **c** de monedas y devuelve el valor final de monedas de la persona.

### TDA
Estructura que contiene la informacion de la Moneda, su simbolo y la cantidad total de monedas iniciales que las Personas pueden tene.

Metodos:
    
    getSize()
Devuelve el valor numerico que corresponde al numero de personas agregadas a la estructura.

    addPerson()
            Parametros: string Nombre, int monedas
Crea y agrega a la estructura un elemento del tipo PERSONA con el nombre y cantidad de monedas pasadas como parametros, 
las monedas son tomadas de la reserva inicial de la estructura, si no hay monedas suficiente imprimira un error en consola.

     transferCoins()
            Parametros: string a, string b, int c

Transfiere una cantidad equivalente al parametro **c** de la persona con nombre **a** hacia la persona **b** e imprime las cantidades finales de ambas personas
o muestra un error en consola si no encuentra a las personas.

    findPersonByName()
            Parametros: string nombre
Busca en la lista de personas si alguna de ellas tiene el nombre **nombre** recibido como parametro y devuelve un puntero con la referencia de memoria de esa persona.

    transferFromBucket()
            Parametros: string a, int c

Transfiere la cantidad **c** de monedas desde la reserva inicial hacia la persona **a** e imprime la cantidad final de la persona, imprime un error si la persona no existe o si la cantidad de monedas no esta disponible.

  

  

#include <iostream>

using namespace std;

int main(void)
{ 
    int desayuno, almuerzo, cena, bebida, postres,comida;
    
    cout<<"Bienvenido a nuestro restaurante"<<endl;
    cout<<"Si desea ordenar desayuno presione 1"<<endl;
    cout<<"Si desea ordenar almuerzo presione 2"<<endl;
    cout<<"Si desea ordenar cena presione 3"<<endl;
    cout<<"Si desea ordenar postre presione 4"<<endl;
    cout<<"Si desea ordenar una bebida presione 5"<<endl;
    cout<<"Si desea salir presione 6"<<endl;
    cin>>comida;
    
    if(comida==1){
         cout<<"Nuestro menu le ofrece las siguientes opciones en desayunos"<<endl;
         cout<<"Desayuno tipico, Desayuno ejecutivo"<<endl;
         cout<<"El desayuno tipico le ofrece : frijoles, platanos, huevos revueltos, pan"<<endl;
          cout<<"El desayuno ejecutivo le ofrece: Frijoles, platnos, chorizo, huevos revueltos, pan"<<endl;
    }
    else if(comida==2)
    {
         cout<<"En almuerzos le podemos ofrecer los siguiemtes platillos:"<<endl;
         cout<<"Carne asada, Pechuga de pollo a la plancha, Hamburguesa"<<endl;
    
         cout<<"El platillo de carne asada le ofrece: Filte de res de 8 onzas, arroz, ensalada"<<endl;
         cout<<"El platillo de pollo a la plancha le ofrece: Filete de pollo de 58 onzas, arroz, ensalada"<<endl;
         cout<<"El platillo de hamburguesa le ofrece: hamburguesa de pollo o res, papas fritas"<<endl;
    }
    else if(comida==3){
        cout<<"En cenas le podemos ofrecer las siguientes opciones:"<<endl;
        cout<<"Cena tipica, pupusas"<<endl;
        cout<<"La cena tipica le ofrece: frijoles, platano, huevos revueltos, pan"<<endl;
        cout<<"El plato de pupusas le ofrece: una orden de 3 pupusas"<<endl;
    }
    else if(comida==4){
         cout<<"En bebidas le podemos ofrecer: Gaseosa, cafe, horchata, jugo de naranja"<<endl;
    }
    else if (comida==5){
         cout<<"En postres le podemos ofrecer: Tartaleta de frutas, flan de vainilla, muffin de chocolate "<<endl;
    }
    else{
        comida==6;
        cout<<"Gracias por su visita"<<endl;
    }
    return 0;
}

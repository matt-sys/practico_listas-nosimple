
////////////////////////////////////////////////////////////////

void Mostrar_Lista (
  NODO* _raiz
){

  //////////////////////////////////////////////////////////////

  for (
    NODO* nodo    = _raiz;
          nodo isnt nullptr;
          nodo    = nodo->prox
  )
    std::cout << nodo->valor << "; ";

  //////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////
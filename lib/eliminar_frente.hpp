
////////////////////////////////////////////////////////////////

NODO* Eliminar_Frente (
  NODO* _raiz
){

  //////////////////////////////////////////////////////////////

  if ( _raiz is nullptr )
    return nullptr;

  //////////////////////////////////////////////////////////////

  NODO* nodo  = _raiz;
        _raiz = _raiz->prox;

  //////////////////////////////////////////////////////////////

  delete nodo;

  //////////////////////////////////////////////////////////////

  return _raiz;

  //////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////

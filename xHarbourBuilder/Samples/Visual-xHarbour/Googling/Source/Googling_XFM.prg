#include "vxh.ch"
//---------------------------------------- End of system code ----------------------------------------//

//------------------------------------------------------------------------------------------------------------------------------------

CLASS __Googling INHERIT Application
   // Components declaration
   METHOD Init() CONSTRUCTOR

   // Event declaration
ENDCLASS

METHOD Init( oParent, aParameters ) CLASS __Googling
   ::Super:Init( oParent, aParameters )


   // Populate Components
   // Properties declaration
   ::Resources            := {  }

   ::Create()

   // Populate Children
RETURN Self


#include "boje.h"


   const Color siva = { 25, 30, 35, 255 };
   const Color zelena = { 47, 230, 23, 255 };
   const Color crvena = { 232, 18, 18, 255 };
   const Color zuta = { 237, 234, 4, 255 };
   const Color narancasta = { 266, 166, 17, 255 };
   const Color ljubicasta = { 166, 0, 247, 255 };
   const Color plava = { 13, 64, 216, 255 };
   const Color pukeZelena = { 137, 162, 3, 255 };

 std::vector<Color> GetCellColors() {

	 return {siva,pukeZelena, crvena,zuta,narancasta,ljubicasta, plava, zelena};
 }

#include "boje.h"


 extern const Color siva = { 25, 30, 35, 255 };
 extern const Color pukeZelena = { 137, 162, 3, 255 };
 extern const Color crvena = { 232, 18, 18, 255 };
 extern const Color zuta = { 237, 234, 4, 255 };
 extern const Color narancasta = { 266, 166, 17, 255 };
 extern const Color ljubicasta = { 166, 0, 247, 255 };
 extern const Color plava = { 13, 64, 216, 255 };

 std::vector<Color> GetCellColors() {

	 return { siva,pukeZelena, crvena,zuta,narancasta,ljubicasta, plava};
 }

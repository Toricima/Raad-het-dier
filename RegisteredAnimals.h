#pragma once

#include <string>

using namespace std;

enum AnimalType {
	Vertebrate = 1 << 0,
	Viviparous = 1 << 1,
	RoamsTheLand = 1 << 2,
	Scaled = 1 << 3,
	ColdBlooded = 1 << 4, // 2 in het kwadraat 4 = 16, maar eigenlijk schuif je waarde 1 4 plekken naar links: 10000
	HasClaws = 1 << 5,
	HasHooves = 1 << 6,
	Ivor = 1 << 7,
	Rodent = 1 << 8,
	EatsMeat = 1 << 9,
	LivesInTree = 1 << 10,
	Small= 1 << 11,
	Pet = 1 << 12,
	Herd = 1 << 13,
	Rumination = 1 << 14,

// country?
	Jungle = 1 << 15,
	Savannah = 1 << 16,
	Forest = 1 << 17,
	Dessert = 1 << 18,
	Cave = 1 << 19,
	Mountain = 1 << 20,
	Ocean = 1 << 21,
// Habitat
// Eats
	EatsMice = 1 << 22 | EatsMeat,
	EatsLeaves = 1 << 23,
	EatsNuts = 1 << 24,
	EatsGrass = 1 << 25,
	EatsBirds = 1 << 26,
	CanFly = 1 << 27,
	EatsFish = 1 << 28,
	Climbs = 1 << 29,
	Nocturnal = 1 << 30,

};

struct Animal {
	string Name;
	int Type;
};

#define MAX_ANIMALS 40
Animal animals[MAX_ANIMALS] = {
	// invertebrate
	{ "Zeespons",	Small},
	{ "Zeekomkomer",Small},
	{ "Kwal",		Small},
	{ "Plankton",	Small},
	{ "Kever",		Small|RoamsTheLand},
	//----------------------------Vertebrate----------------------------
	{ "Vleermuis",	Vertebrate |Small| EatsMeat |Viviparous| EatsMice | Cave | CanFly | Nocturnal},
	{ "Hond",		Vertebrate | RoamsTheLand | Viviparous | EatsMeat |Pet},
	{ "Aap",		Vertebrate | RoamsTheLand | Viviparous | LivesInTree|Jungle},
	{ "Luiaard",	Vertebrate | RoamsTheLand | Viviparous | LivesInTree},
	//------------------------Dieren met clawen----------------------------
	{ "Gordeldier", Vertebrate | RoamsTheLand | Viviparous | Small },
	{ "Muis",		Vertebrate | RoamsTheLand | Viviparous | Small | Pet },
	{ "Konijn",		Vertebrate | RoamsTheLand | Viviparous | Small | Pet | EatsLeaves},
	{ "Eekhoorn",	Vertebrate | RoamsTheLand | Viviparous | Rodent | Small | Rumination },
	{ "Cavia",		Vertebrate | RoamsTheLand | Viviparous | HasClaws | Rodent | Small | Pet | EatsNuts},
	{ "Hamster",	Vertebrate | RoamsTheLand | Viviparous | HasClaws | Rodent | Small | Pet | EatsNuts | Nocturnal},
	{ "Kat",		Vertebrate | RoamsTheLand | Viviparous | HasClaws | EatsMeat | Pet | EatsMice | Nocturnal},
	{ "Tijger",		Vertebrate | RoamsTheLand | Viviparous | HasClaws | EatsMeat | Forest | Nocturnal},
	{ "Leeuw",		Vertebrate | RoamsTheLand | Viviparous | HasClaws | EatsMeat | Savannah | Nocturnal},
	{ "Luipaard",	Vertebrate | RoamsTheLand | Viviparous | HasClaws | EatsMeat | Nocturnal},
	{ "Beer",		Vertebrate | RoamsTheLand | Viviparous | HasClaws | Forest| EatsFish },
	{ "Kangoeroe",	Vertebrate | RoamsTheLand | Viviparous},
	//------------------------Dieren met hoeven----------------------------
	{ "Geit",		Vertebrate | RoamsTheLand | Viviparous | HasHooves | Rumination},
	{ "Schaap",		Vertebrate | RoamsTheLand | Viviparous | HasHooves | Rumination | Herd | EatsGrass},
	{ "Koe",		Vertebrate | RoamsTheLand | Viviparous | HasHooves | Rumination |EatsGrass},
	{ "Paard",		Vertebrate | RoamsTheLand | Viviparous | HasHooves | Rumination},
	{ "Zebra",		Vertebrate | RoamsTheLand | Viviparous | HasHooves | Rumination},
	{ "Bizon",		Vertebrate | RoamsTheLand | Viviparous | HasHooves | Rumination|Herd },
	{ "Kameel",		Vertebrate | RoamsTheLand | Viviparous | HasHooves | Herd | Dessert },
	{ "Ezel",		Vertebrate | RoamsTheLand | Viviparous | HasHooves | EatsGrass},
	{ "Muildier",	Vertebrate | RoamsTheLand | Viviparous | HasHooves },

	{ "Olifant",	Vertebrate | RoamsTheLand | Viviparous | HasHooves | Ivor |Herd},
	{ "Neushoorn",	Vertebrate | RoamsTheLand | Viviparous | HasHooves | Ivor | Rumination},
	//------------------------Dieren in het water-------------------------------
	{ "Guppy",		Vertebrate | Scaled | Small | Pet},
	{ "Goudvis",	Vertebrate | Scaled | Small | Pet},
	{ "Zeepaard",	Vertebrate | Scaled | Small },
	{ "Haai",		Vertebrate | EatsFish | Ocean },
	{ "Orka",		Vertebrate | EatsFish | Ocean },
	{ "Dolfijn",	Vertebrate | EatsFish | Viviparous |Ocean},
	{ "Walvis",		Vertebrate | EatsFish | Viviparous |Ocean},
	{ "Otter",		Vertebrate | Viviparous |RoamsTheLand |EatsFish},
};
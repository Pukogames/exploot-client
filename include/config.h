#ifndef CONFIG_H
#define CONFIG_H

#define UDP_PORT 8890
#define SERVER_HOST "localhost"
#define MYSQL_HASH "exploot 0.0.1 client"

#define TEXTBOX_WIDTH 200
#define TEXTBOX_HEIGHT 30
#define LOGIN_HEIGHT 140
#define LOGIN_WIDTH 350

namespace GameStates{
	enum GAME_STATE{
		MENU,
		CHARACTER_SELECT,
		INGAME,
		EXIT
	};
}

#endif

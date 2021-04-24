#include <windows.h>
#include <desktop_manager.h>



int main(void){
	move_to_desktop(GetConsoleWindow(),1);
	switch_to_desktop(2);
}

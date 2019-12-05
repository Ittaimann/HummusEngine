#include "Application.h"
#include <iostream>
// Class inherited by applications. 

namespace HUM
{

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application ::Run() 
	{
		while (true);
	}
	void Application::Print() 
	{
		printf(" WELCOME TO THE FIRST *IN-ENGINE* ENGINE UPDATE \n \n After learning a lot about things that didn't solve my bug, \n Josh-the-Wonderful-Human/@Darkchicken#4529 helped me realize the *error* of my ways, \n and I'm back on track.");
				                                                                                                                                                                   
	}

	//Hummus ASCII Art
	void Application::MakeHummus() 
	{
		std::cout << R"(

                                                                                      ...............................................                 
                                                                            .............                                       ...............       
                                                                    .........                                                             ............
                                                              .......                                                                             ....
                                                          .....                                                                                       
                                                     .....                                                             ....................           
                                                 .....                                                                              ................  
                                             .....                                                                                         ........'''
                                          .....                                                                                          ....... .....
                                       .....                                                                                                ..........
                                     ....                                                                                                     ........
                                  ....                                   .................................                                       .....
                                ....             ..              .......................................''''...',.                                 ...
                              ....           ...            ....''......  ...         ......''''......',,''':oxOkc'...                                
                            ....           ..            ...'....  .....,okOx:.......':lol:coddoooddddkkxxddx0KOc.'',,,'..                            
                           .'.          ..           .......     .cOxodxOK0OkxdoodxxdxOOxc:lxdokxokkxxOkdx0OO00x,......',,,...                        
                         .'.          ..          ...'..       .'ckO00000OxollddlcoodxOkd:;:cccdxdk0Ok0Oxk000OOd:,.........,;;'..                     
                        .'.          .          ..''.    ....'cxO00OO0Oxdolc:::;;,,:cdOOkdolclodkdoodOK0kxOOOOOdccc:;,,.. ....,;;'.                   
                      .''.         .          ..'..   .... 'okO0KK0kxddoc;;,;:ccc:;;:clolllcccloxdoxO0kxxOOkO0koc;;::::;.. ......,;,..                
                     .,.         .          ..'..  ....   ,k00K0OOO0OkkkxoooxOOOOOxl:;::,,;;;coxxxO00Okkkk0KK0koc;'.',;::,''...''..',,..              
                    .,.         .         ..,'.  ...    .;k0kkkxdxkOOkkOOOkkOKKKKKK0kxoooooddxkxxxkkdxxxddOKK0ko:,'',codocll'  .'''..','.             
                   .,.                   .',..  .'.     .xXKOxlc::lkOOOKXXKKKXXKKKKKKkxkOOOkkOOkOOOkkkkkkkOKK0ko:,;coodl::lc;,'.  .'....,'.           
                  .,'                   .',.  ...       ;O00K0kl;,;oO00KXXKKKXXKK000KKKKK0O00OOkkkkxxddkO0K0kxdollodxxddooddlcl:.   ..  .''.          
                 .,'.                  .',.  ..      ..;o0OkO0KxccldkkdxOKXXXXKK00000000000KKOxxkkkkxxxkkOOkxxxkxooxkxxxddooollc:.       ..,.         
                 ',.                  .';'.        .,oO00K0kOO0kocldxxdoxKNNNXXKO0000K000OOOkkkOkkOkkOOOOOOOOOOkOOkxxdolodollolccc;.      ..,.        
                .,.                   .;,.   ... ..;OXKKKX0Oxdk0x:;codxkkOKKKXXXKKK000OO0OkxxxxkkxxxxOOkOOkkxxxddxdoooooollc::cllloc.      .''.       
                ',.                  .';'.   .... .oXXXKXXXXxcd0Oo;;cllooooodkO0KKKKK0000OOkxxkkxxdodxxdddoddoolooooddoollcc:::ccllo:.  ..  .'.       
               .,.                   .,;.     .. .'oKKOOKXXKx;:dO0dc:::;:cclloddxkOOOO000OOkkkkkkxodxkkxkxxxdddoloodddddddddoooooodol.  ..   .,.      
               .,.                   .,;.  . ..';x0KXKOk0XXX0l::coxdc;;:clcccloooddxxxxxdxxxkkkkkkxkkOOOOkkkdoddoldxxxxxxxddxxxdooocc,.      .;'      
               ',.                   .,;'   ..',:OKKXK00KKXXKOdc;;:cc:ccccllcccccllllllooooodddddxxxxkkkkkkxolooooodxxxdxxddddolll:,,,.      .:,      
              .,'                    .';,.  ... .o0KXK0KKKXXXKKOxoc;;;ckOkxxxolc::::;,:loollllloooooolllodooolloolldddddooolcc::lol;,,.      .:'      
              .,'                .    .;;.   ....:kKXKKKKKXXXXXKK0xddoloxkKXXK0Okxddollllllcccllcllllcccccclcccllollloooooooollccolcc;.      ':.      
              .,'              ...    .':,.    .''cOKKXXXKKXXKKKK0xx00OOOOOOOO00OkkO00OOOOkkkkkxddollloooloooooooddodxxooxOOxxxxddoll:.     .;;.      
              .,'             .....    .,:,.    . .cO00KXKKKXXKXX000KKK00K000OkkxxxxkkkkkkO00K000OkkkOO00OOOOOkkkkkddkkxxkOOkkkxdolll:..   .':'       
              .,,.            ...  .  . .,;,.  .....:xKXXKKKXK0KX00KKK0kk0000OkOOOkxdddkOOkdddxxOOxxkO0KKKKOOOO0Okxoodxkxdooddoolllc:'..   .;'.       
               ',.           .......     .,:,........'d0KKKKKK0OOkk0KKKKK00K0OOO0000OkkOO0OxollllccldkkO00OkOOOOkdllloodkd;''''''.......  .,'.        
               .;'.          ..........   .':;'........:oxO0000O00K000000000000OO000000000Odxxl;:clodxddxdx0K0Oxdl:,,;;:c:'......        .''.         
               .,,.          ..........   ...;:;'.......clllodxO00000000OOO0000000000KKKKOook0koloodxkkxxkO00Okdlc;,''''''''''''.      .''.           
                .;'.         ............   ...;:;'....'cxdc'.';clokOkkOOO00000KKK000K0OxocldkxxxkkkOOOkkk0000Oxl:;;,,;,,',,;;;;.    ..'..            
                .,;.         .............   ....;:;,......'.  .';okOO00KKKKKKK00Oxxxddl::cldkxkkkkkxxddddxxdol:;''''''',;ccc:,'. ...'..              
                 .;,.         ..............   ....,;:;'.........':ldxkkkkkkkkxdddddxdoooodxdddddooooolc:::;;,'''.....',;::;,.....''..               .
                  ';,.        ...............      ...,::;'.........',;coddddxxxddddollloooooolc::::c:;,,,,,,'.................''..                ...
                  .,:,.       .................        ..,;;;'..........,,,,;:cc::cccclllcccclc;;;,','...........   .    ....'..                 .....
                   .,:,.       ..................         ...',;;,''........';.......','.....'.......          ..   .........                  .......
                    .,:,.      .....................           ...'',,,,''......              ..            .......''...                     .........
                     .,:;.      ......................               .....'''',,'''........................'''.....                        ...........
                      .,:;'.     ........................                      ............................                            ...............
                       .'::,.     ..........................                                                                         .................
                         .;c;'.    .............................                                                                 .....................
                          .;c:'.    ..............................                                                             .......................
		)" << '\n';
		std::cout << R"(
		                         
			)" << '\n';
	}

	
}

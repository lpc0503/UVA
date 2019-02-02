#include<bits/stdc++.h>
#include<direct.h>
#include<windows.h>

using namespace std;

string PATH = "C:\\Users\\lpc05\\Desktop\\Programmer\\C++\\UVA\\";

string pushCuPath(string ch, string str){

	for(int i = 0 ; i < str.size() ; i++){

		if(str[i] == '\n')
			continue;
		ch += str[i];
	}

	return ch;
}

string pushDePath(string ch, string str, string attach){

	str = str + '\\' + str + attach;
	for(int i = 0 ; i < str.size() ; i++){

		if(str[i] == '\n')
			continue;
		ch += str[i];
	}

	return ch;
}

int main(){

	#ifdef DBG
	// freopen("1.in", "r", stdin);
	freopen("2.out", "w", stdout);
	#endif

	FILE *fp;
	char buffer[255] = {0};
	string current = PATH;
	string destination = PATH;
	string str;

	// for(int i = 0 ; i < PATH.size() ; i++){

	// 	current.push_back(PATH[i]);
	// 	destination.push_back(PATH[i]);
	// }

	if((fp = _popen("dir /b", "r")) == NULL){//get all the file under the directory

		perror("Fail to open\n");
		exit(1);
	}
	while(fgets(buffer, 255, fp) != NULL){//get a line

		str = buffer;

		bool checkSubAttachmentName = false;

		string sub;//get UVAXXX to create a new directory
		string source;
		string target;
		string tmp;//store the name of the new directory

		for(int i = 0 ; i < str.size() ; i++){

			if(str[0] != 'U')
				break;

			if(str[i] == '.'){

				checkSubAttachmentName = true;
				sub = str.substr(0, i);//here will get UVAXXX
			}
			if(checkSubAttachmentName){

				source = pushCuPath(current, str);

				int sourceLen = source.length();
				char sourceCharArray[sourceLen+1];
				strcpy(sourceCharArray, source.c_str());
				//char *tmpPoint = tmp.data();
				//char *currentPoint = source.data();
				int tmpLen = tmp.length();
				char tmpCharArray[tmpLen+1];
				strcpy(tmpCharArray, tmp.c_str()); 

				if(str[i] == 'c'){

					target = pushDePath(current, sub, ".cpp");//get the path
					int targetLen = target.length();

					char targetCharArray[targetLen+1];
					strcpy(targetCharArray, target.c_str());

					//char *destinationPoint = target.data();
					if(_mkdir(tmpCharArray) == 0){//create new directory

						printf("%s successfully created \n", tmpCharArray);
					}
					else{

						printf("failed to creat\n");
					}
					if(rename(sourceCharArray, targetCharArray) == 0){//move .cpp to the new path

						printf("successfully moved \n");
					}
					else{

						printf("failed to move \n");
					}
					checkSubAttachmentName = false;
					break;
				}

				if(str[i] == 'i' || str[i] == 'o' || str[i] == 'e'){

					if(str[i] == 'i')
						target = pushDePath(current, sub, ".in");
					else if(str[i] == 'e')
						target = pushDePath(current, sub, ".exe");
					else
						target = pushDePath(current, sub, ".out");

					int targetLen = target.length();

					char targetCharArray[targetLen+1];
					strcpy(targetCharArray, target.c_str());

					printf("%s\n", targetCharArray);

					if(_mkdir(tmpCharArray) == -1){
		
						if(rename(sourceCharArray, targetCharArray) == 0){//move .in .exe .out to new directory

							printf("successfully moved \n");
						}
						else{

							printf("failed to move \n");
						}
					}
					else{

						printf("Directory does not exist\n");
					}
					checkSubAttachmentName = false;
					break;
				}
			}
			tmp += str[i];
		}
	}
	return 0;
}
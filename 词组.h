#include<iostream>
using namespace std;

/*struct str{
	string name;
    int count;//name���ִ���
	int flag;//0Ϊ�ǵ��� 
	int flag1;//�ж��Ƿ������
	bool ifend;//�Ƿ�����ĩ 
};*/

struct ph{
	string cizu;
	int num;
	int f;
};

struct ph phrase(struct str *a,int m,int q){//aΪ�ṹ�����顢mΪ�������������qΪ�ʸ��� 
	struct ph b[500],d[500];
	int n=0;
	//string cz[100]; 
	//printf("%d ",sizeof(*a));
	//printf("%d ",sizeof(str));
//	printf("#####%d\n",a[0].ifend );
	int len=sizeof(*a)/sizeof(struct str);

	string c ="";//��ʱ����ַ��� 
	for(int i=0; i<q; i++){

		for(int l=0;l<m;l++){
			//printf("%d ",a[i].flag);
			//printf("%s",a[i].ifend==false?"FALSE":"TRUE");
			if((a[i+l].flag==0) ||((a[i+l].ifend==true) && l!=m-1)){
				//printf("%d ����\n",i);
				break;
			}//�ǵ���ֱ��break���Ƶ���һλ�� ��m��������ĩ���ʣ�ֱ��break���Ƶ���һλ 
			c =  c+a[i+l].name+' ';//����ֱ�Ӽӿո��� 
			//printf("%s ",a[i].name.c_str());
			//printf("%d ",a[i].ifend );
			
			if(l==m-1){
				b[n].cizu = c;//��m���Ѿ����õ��ַ�������ph�ṹ�� 				
				n++;
				//printf("%s\n",c.c_str());    // ����c_str()����
				c = "";
			}
		}
	
	}
	//printf("%d\n",n);
	//�����ظ����� 
	
	for(int i=0; i<n; i++){
		
		if(b[i].f == 1){
			
			continue;//�ṹ��Ϊ������һ��Ԫ�� 
		}
		b[i].num ++;		
		for(int j=i+1; j<n; j++){
			if(b[i].cizu == b[j].cizu ){
				//printf("****\n");
				b[i].num++;
				b[j].f = 1;//�����ظ����飬num��һ���������Ǹ�f����1
			}
		}
		
		
	}

	int j = 0;
	for(int i=0; i<n; i++){
		
		if(b[i].f!=1){
			d[j] = b[i];
			j++;
			
			//printf("%d\n",e);
			
		}
	} 
	//printf("%d\n",e);
	
	for(int i=0; i<j; i++){
		printf("%s ",d[i].cizu.c_str());
		printf("%d\n",d[i].num);
	}
	
	return *d;
	

} 

/*int main(){
	str a[] = {{"Monday",0,0,0,true},{"Tuesday",0,0,0,true},{"Wednesday",0,1,0,true},{"Monday",0,0,0,true},{"Tuesday",0,1,0,true},{"Wednesday",0,0,0,true},{"Monday",0,0,0,false},{"Tuesday",0,0,0,false},{"Wednesday",0,1,0,false},{"Thursday",0,0,0,true},{"Friday",0,0,0,true}};
	int size = sizeof(a);
	//
	struct ph d = phrase(a,3,11);

	
//Monday Tuesday Wednesday Thursday
//name���ִ���//0Ϊ�ǵ��� //�ж��Ƿ������//�Ƿ�����ĩ 
//Friday
}*/

	
 

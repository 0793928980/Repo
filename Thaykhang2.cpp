#include<stdio.h>
#include<math.h>
const int Temp=0, Temp1=-1;
void lkusle(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		int t=n%i;
		if(t==0)
		{
			if(i%2!=0)
			{
				printf("%d ",i);
			}
		}
	}
}
void tongUschan(int n)
{
	int i=1;
	int s=0;
	while(i<=n)
	{
		if(n%i==0)
		{
			if(i%2==0)
			{
				printf("%d ",i);
				s+=i;
			}
		}
		i++;
	}
	printf("S = %d",s);
	
}
void uslemax(int n)
{
	int i=1;
	int max=1;
	while(i<=n)
	{
		if(n%i==0 && i%2!=0)
		{
		
			if(i>max)
			{
				max=i;
			}
			
		}
		i++;
	}
	printf("Uoc so le lon nhat: %d",max);
}
void ktsohoanthien(int n)//la so ma tong uoc so cua no bang chinh no.
{
	int i=1;
	int s=0;
	while(i<=n)
	{
		if(n%i==0)
		{
			s+=i;
		}
		i++;
	}
	if(s==n)
	{
		printf("%d la so hoan thien\n",n);
	}else
	{
		printf("%d la so k hoan thien\n",n);
	}
}

bool kiemtrasnt(int n)
{
	int i;
	
	if(n<2)
	{
		return false;	
	}
	
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			return false;
		}else
		{
			return true;
		}
		
		
	}
	
	
}
bool ktsCP(float n)
{
	int i;
	if(n>1 && sqrt(n) == (int)sqrt(n))
	{
		return true;
	}else
	{
		return false;
	}
	
}
void demsonguyen(int n)
{
	int dem=0;
	
	int i=1;
	int t=n;
	int s=0;
	if(n==0)
	{
		dem=1;
	}
	while(t!=0)
	{
		s=s+t%10;
		t=t/10;
	
		i++;
	}
	printf("S = %d",s);
}
void tichsonguyen(int n)
{
	int tich=1;
	int t=n;
	if(n==0)
	{
		tich=0;
	}
	while(t!=0)
	{
		
		tich=tich*t%10;
		t=t/10;
	}
	printf("Tich = %d",tich);
}
void demsole(int n)
{
	int i=1;
	int dem=0;
	if(n==0)
	{
		dem=0;
	}
	int t=n;
	int a;
	while(t!=0)
	{
		
		if(t%2==1)
		{
			dem++;
			
		}
		t=t/10;
	}
	printf("co %d so le",dem);
	
}
void tongchan(int n)
{
	
	int t=n;
	int s=0;
	while(t!=0)
	{
		
		if(t%2==0)
		{
			s+=t%10;
		}
		t/=10;
	}
	printf("S = %d",s);
}
void sodautien(int n)
{
	int t=n;
	
	do
	{
		t=n%10;
		n=n/10;
		
		
	}while(n>0);
	printf("So dau tien la %d",t);
	
	
	
}
void sond(int n)
{
	int snd=0;
	do
	{
		printf("Nhap n: ");
		scanf("%d",&n);
		if(n<0)
		{
			printf("Loi n>=0!");
		}
		
		
	}while(n<0 );
	
//	do
//	{
//		printf("%d",n%10);
//	}
//	while(n/=10);
	
	do
	{
		snd=snd*10+n%10;
		n/=10;
	}while(n!=0);
	printf("%d",snd);
}

void timmax(int n)
{
	int i=1;
	int max=1;
	do
	{
		i=n%10;
		if(i>max)
		{
			max=i;
		}
		
		
	}while(n/=10);

	printf("Max la: %d",max);
}

void timmin(int n)
{
	int i=1;
	int min=n%10;
	do
	{
		i=n%10;
		if(i<min)
		{
			min=i;
		}
		i++;
	}while(n/=10);
	printf("Min la: %d",min);
}
void demmax(int n)
{
	int i=1;
	int dem=0;
	int max=n%10;
	do
	{
		i=n%10;
		if(i==max)
		{
			dem++;
		}
		if(i>max)
		{
			max=i;
		}
		i++;
	}while(n/=10);
	printf("Co %d so lon nhat\n",dem);
}

void demmin(int n)
{
	int i=1;
	int min=n%10;
	int dem=0;
	do
	{
		i=n%10;
		
			
		if(i<min)
		{
			min=i;
		}
		if(i==min)
		{
			dem++;
		}
		
		
		
		i++;
		
	}while(n/=10);
	printf("Co %d so Min\n",dem);
}


bool ktsl(int n)
{
	int i;
	
	for(i=1;i<=n;i++)
	{
		
		
		if((n%10)%2!=0)
		{
			return true;
		}else
		{
			return false;
		}
	}
}
bool ktsc(int n)
{
	int i=1;
	while(n/=10)
	{
		
		if((n%10)%2==0)
		{
			return true;
		}else
		{
			return false;
		}
		i++;
	}
}
bool ktsdx(int n)
{
	int i,snd=0,t;
	int a=n;
	for(i=n;n!=0;n/=10)
	{
		t=n%10;
		snd=snd*10+t;
	}
	if(a==snd)
	{
		return true;
	}else
	{
		return false;
	}
	
	
}
void kttang(int n)
{
	
	int i=1;
	int t=n;
	int cuoi=n%10;
	t/=10;
	bool kt=true;
	while(t!=0)
	{
		int kecuoi=t%10;
		t/=10;
		
		if(cuoi<kecuoi)
		{
			kt=false;
			break;
		}else
		{
			cuoi=kecuoi;
		}
		
		i++;
	}
	if(kt)
	{
		printf("true");
	}else
	{
		printf("false");
	}

	

	
	
}
void ktgiam(int n)
{
	int i=1;
	int t=n;
	int sc=n%10;
	t/=10;
	bool kt=true;
	while(t!=0)
	{
		int kc=t%10;
		t/=10;
		if(sc>kc)
		{
			kt=false;
			break;
		}else
		{
			sc=kc;
		}
		i++;
			
	}
	if(kt)
	{
		printf("true");
	}else
	{
		printf("false");
	}
}

int timucln(int a, int b)//bang phuong phap tru
{
	
	if(a==0 || b==0) /*Kiem tra a hoac b co = 0 hay k neu bang khong tra ve a+b
	Lap cho toi khi a=b. Voi moi vong lap bien max(a,b)=giatri max(a,b)-giatri min(a,b)
	*/
	{
		return a+b;
	}
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}else
		{
			b=b-a;
		}
	}
	return a;
	
}
/*
	
*/
int ucln(int a, int b)
{
	if(b==0)
	{
		return a;
	}else
	{
		return ucln(b,a%b);
	}
}

void demsnd(int n)
{
	int dem=0;
	int t=n;
	if(t==0)
	{
		dem=1;
	}
	while(t!=0)
	{
		
		dem++;
		t/=10;
		
	}
	printf("%d",dem);
}
int tongsnd(int n)
{
	int s=0;
	int t=n;
	for(int i=0;i<n;i++)
	{
		s+=t%10;
		t/=10;
	}
	return s;
}
void tichsnd(int n)
{
	long tich=1;
	int t=n;
	while(t!=0)
	{
		tich*=t%10;
		t/=10;
	}
	printf("%ld", tich);
}
void demsle(long n)
{
	int dem=0;
	long t=n;
	int i=1;
	while(t!=0)
	{
		if(t%2==1)
		{
			dem++;
			
		}
		t/=10;
		i++;
	}
	printf("%d",dem++);
}
int tongsc(long n)
{
	int s=0;
	long t=n;
	if(n==0)
	{
		s=0;
	}
	while(t!=0)
	{
		if(t%2==0)
		{
			s+=t%10;
		}
		t/=10;
	}
	
	return s;
}
long tichsle(long n)
{
	long tich=1;
	long t=n;
	while(t!=0)
	{
		if(t%2==1)
		{
			tich*=t%10;
		}
		t/=10;
	}
	return tich;
}
int timsodt(int n)
{
	int t=n;
	do
	{
		t=n%10;
		n/=10;
	}while(n>0);
	return t;
}
int sodn(int n)
{
	int t=n;
	int sdn=0;
	while(t!=0)
	{
		sdn = 10*sdn + t%10;
		t/=10;
	}
	return sdn;
}
int Maxsnd(int n)
{
	int max=n%10;
	int t=n;
	while(t!=0)
	{
		if(t%10>max)
		{
			max=t%10;
		}
		
		t/=10;
	}
	return max;
}
int Minsnd(int n)
{
	int min=n%10;
	int t=n;
	while(t!=0)
	{
		if(t%10<min)
		{
			min=t%10;
		}
		t/=10;
	}
	return min;
	
}
int demMax(int n)
{
	int t=n;
	int i=1;
	int dem=0;
	int max=n%10;
	do
	{
		i=t%10;
		if(i==max)
		{
			dem++;
		}
		if(i>max)
		{
			max=i;
		}
		i++;
		
	}while(t/=10);
	return dem;
}
int demMin(int n)
{
	int t=n;
	int dem=0;
	int min=n%10;
	do
	{
		if(t%10==min)
		{
			dem++;
		}
		if(t%10<min)
		{
			min=t%10;
		}
		
		
	}while(t/=10);
	return dem;
}
bool kiemtrale(int n)
{
	int t=n;
	if(n==0)
	{
		return false;
	}
	while(t!=0)
	{
		
		if((t%10)%2==1)
		{
			return true;
		}else
		{
			return false;
		}
	}
	
}
bool kiemtrachan(int n)
{
	int t=n;
	while(t!=0)
	{
		if((t%10)%2==0)
		{
			return true;
		}else
		{
			return false;
		}
	}
}

bool kiemsdxung(long n)
{
	long t=n;
	int a;
	int sdn=0;
	do
	{
		a=n%10;
		sdn=10*sdn+a;
		
	}while(n/=10);
	

	if(sdn==t)
	{
		return true;
	}else
	{
		return false;
	}
}
bool kttangdan(int n)
{
	int a[n];
	
	int j=0;
	while(n!=0)
	{
		a[j] = n%10;
		n/=10;
		
		j++;
	}
	bool kt=true;
	for(int i=0;i<j;i++)
	{
		if(a[i]<=a[i+1])
		{
			kt=false;	
		}
	}
	return kt;
}
bool kttdan(int n)
{
	
	int t=n;
	int cuoi=n%10;
	t/=10;
	bool kt = true;
	while(t!=0)
	{
		int kecuoi=t%10;
		t/=10;
	
		if(cuoi>kecuoi)
		{
			kt=true;
		}else
		{
			kt=false;
		}
	}
	return kt;
}

bool ktgdan(int n)
{
	int t=n;
	int cuoi=n%10;
	t/=10;
	bool kt=true;
	while(t!=0)
	{
		int kecuoi=t%10;
		t/=10;
		
		if(cuoi<kecuoi)
		{
			kt=true;
			
		}else
		{
			kt=false;
		}
	}
	return kt;
}
int Ucln(int a, int b)//USE Sub
{
	int ucln;
	if(a==0 || b==0)
	{
		return a+b;
	}
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}else
		{
			b=b-a;
		}
	}
	return a;
	
}
int Ucln1(int a, int b)
{
	while(a*b!=0)
	{
		if(a>b)
		{
			a=a%b;
		}else
		{
			b=b%a;
		}
	}
	return a+b;
}
int max2so(int a, int b)
{
	if(a>b)
	{
		return a;
	}else
	{
		return b;
	}
}

int BCNN(int a, int b)
{
	int lcm;
	for(int i=max2so(a,b);i<=a*b;i++)
	{
		if(i%a==0 && i%b==0)
		{
			lcm=i;
		}
	}
	return lcm;
}
int BCNN1(int a, int b)
{
	return a*b/Ucln(a,b);
}
double PTB1(double a, double b, double &x)
{
	int t;
	if(a!=0)
	{
		x = -b/a;
		t = 1;
	}else
	{
		if(b==0)
		{
			t=Temp1;
		}else
		{
			t=Temp;
		}
	}
	return t;
}
void tong67(int x, int n)
{
	float S=0;
	float T=1;
	int i=1;
	while(i<=n)
	{
		T=T*x;
		S+=T;
		i++;
	}
	printf("Tong= %f\n",-S);
}
void tong68(int x, int n)
{
	float S=0;
	float T=1;
	int i=1;
	while(i<=n)
	{
		T=pow(x,(2*i))*pow(-1,float(i));
		S+=T;
		i++;
	}
	printf("Tong = %f",S);
}
void tong69(int x, int n)
{
	float T=1;
	float S=0;
	int i=1;
	while(i<=n)
	{
		T=pow(x,(2*i+1))*pow(-1,float(i));
		S+=T;
		
		i++;
	}
	printf("Tong = %f",S);
}
void tong70( int n)
{
	float S=0;
	int s=0;
	int i=1;
	while(i<=n)
	{
		s+=i;
		
		S=S+1*pow(-1,(float)(i+1))/s;
		i++;
	}
	printf("Tong  = %f\n",S);
	
	
}
void tong71(int x, int n)
{
	float S=0;
	float s=0;
	int i=1;
	float T=1;
	while(i<=n)
	{
		s+=i;
		T=(pow(x,(float)i)*pow(-1,(float)(i)))/s;
		S+=T;
		i++;
	}
	printf("Tong %f\n",S);
}
int gt(int n)
{
	int gt=1;
	int i=1;
	while(i<=n)
	{
		gt*=i;
		i++;
	}
	return gt;
}
void tong72(int x, int n)
{
	float S=0,T=1;
	int i=1;
	while(i<=n)
	{
		T=T*x;
		S+=(pow(-1,(float)i))*T/gt(i);
		i++;
	}
	printf("Tong %f\n",S);
}
void tong73(int x, int n)
{
	float S=-1,T=1;
	int i=1;
	while(i<=n)
	{
		T=pow(x,(2*i));
	
		S+=pow(-1,(float)(i+1))*T/gt(2*i);
		i++;
	}
	printf("Tong %f\n",S);
}
float tong73s(int x, int n)
{
	float S=1,T=1,GT=1;
	int i=1;
	while(i<=n)
	{
		T=pow(x,(2*i));
		GT=GT*(2*i)*((2*i)-1);
		S+=pow(-1,(float)(i))*T/GT;
		i++;
	}
	printf("Tong %f\n",-S);
}
float tong74(int x, int n)
{
	float S=1,T=1;
	int i=1;
	while(i<=n)
	{
		T=pow(x,(2*i+1));
		S+=pow(-1,(float)(i+1))*T/gt(2*i+1);
		
		i++;
	}
	printf("Tong %f\n",S-x);
}
int Max3so(int a, int b, int c)
{
	int max=a;
	if(b>max)
	{
		max=b;
	}
	if(c>max)
	{
		max=c;
	}
	return max;
}

bool ktcdau(float a, float b)
{
	if(a*b>0)
	{
		return true;
	}else
	{
		return false;
	}
	
	
}

void ptb1(float x, int a, int b)
{
	if(a!=0)
	{
		x = (float)(-b)/(float)(a);
		printf("X = %f",x);
	}else
	{
		if(b==0)
		{
			printf("PT VSN\n");
		}else
		{
			printf("PT VN");
		}
	}
}
void KtQuy(int thang)
{

	
	switch(thang)
	{
		case 1:
		case 2:
			printf("Quy 1\n");
			break;
		
		case 4:
		case 5:
		case 6:
			printf("Quy 2\n");
			break;
		case 7:
		case 8:
		case 9:
			printf("Quy 3\n");
			break;
		case 10:
		case 11:
		case 12:
			printf("Quy 4\n");
			break;
		default:
			printf("Khong co Quy nao\n");
			break;
	}
	
}
long tong86(int n)
{
	int i;
	long s=0;
	for(i=1;i<=n;i++)
	{
		s+=pow(i,3);
	}
	return s;
}
void timsndn(int n)
{
	n=0;
	int s=0;
	while(s<10000)
	{
		n++;
		s+=n;
	}
	printf("Tong la %d\n",s);
	printf("So n la %d",n);
}
void xuatkytu()
{
	char kytu;
	for(kytu='a'; kytu<='z';kytu++)
	{
		printf("%c ",kytu);
	}
}
void tong89(int n)
{
	int s=0;
	int i=1;
	while(i<n)
	{
		s+=i;
		i=i+2;
		if(i>=n)
		{
			break;
		}
	}
	printf("Tong gia tri le %d",s);
}
void in()
{
	int i=1;
	while(i<100)
	{
		printf("%d ",i);
		i=i+2;
	}
}
void timsndmax()
{
	int n;
	int m=0;
	int s=0;
	scanf("%d",&n);
	do
	{
		m=m+1;
		s=s+m;
	}while(s+m+1<n);
	printf("So m la %d",m);
}
int UcMax(int a, int b)
{
	if(a==0 || b==0)
	{
		return a+b;
	}
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		if(b>a)
		{
			b=b-a;
		}
	}
	return a;
}
bool songuyento(int n)
{
	if(n<2)
	{
		return false;
	}
	for(int i=2;i<n-1;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
void in94()
{
	int i;
	for(i=1;i<100;i+=2)
	{
		if((i==5) || (i==7)|| (i==93))
			continue;
		printf("%d  ",i);
		
		
	}
}
void tinhfx(int x)
{
	
	int fx;
	
	if(x>=5)
	{
		fx=2*x*x+5*x+9;
	}else
	{
		fx=-2*x*x+4*x-9;
	}
	printf("Gia tri fx la: %d",fx);
}
void abs(float a, float b, float c)
{
	printf("Nhap a: \n");
	scanf("%f",&a);
	printf("Nhap b: \n");
	scanf("%f",&b);
	printf("Nhap c: \n");
	scanf("%f",&c);
	
	if(a<0)
	{
		a=-a;
	}
	if(b<0)
	{
		b=-b;
	}
	if(c<0)
	{
		c=-c;
	}
	
	printf("a = %f\n",a);
	printf("b = %f\n",b);
	printf("c = %f\n",c);
}
void kttamgiac(float a, float b, float c)
{
	printf("Nhap a: \n");
	scanf("%f",&a);
	printf("Nhap b: \n");
	scanf("%f",&b);
	printf("Nhap c: \n");
	scanf("%f",&c);
	
	if(a+b>c && b+c>a && a+c>b)
	{
		if(a==b && b==c)
		{
			printf("Tam giac Deu\n");
		}
		else if((a*a)==(b*b+c*c) || (b*b)==(a*a+c*c) || (c*c) == (b*b + a*a))
		{
			printf("Tam Giac vuong \n");
		}
		else if(a==b || a==c || b==c)
		{
			printf("Tam giac Can\n");
		}
		else if(a*a>b*b+c*c || b*b>a*a+c*c || c*c > b*b + a*a)
		{
			printf("Tam giac Tu\n");
		}else
		{
			printf("Tam giac Nhon\n");
		}
	}else
	{
		printf("Day khong phai la mot tam giac");
	}
}
void bacnhat2an(int a1, int b1, int c1,int a2, int b2, int c2)
{
	int D= a1*b2-b1*a2;
	int Dx=b2*c1-c2*b1;
	int Dy=a1*c2-a2*c1;
	float x,y;
	
	if(D==0)
	{
		if(Dx==Dy==0)
		{
			printf("PT co Vo so nghiem\n");
		}else
		{
			printf("PT Vo Nghiem\n");
		}
	}else
	{
		x=Dx/D;
		y=Dy/D;
	}
	printf("X = %f\n",x);
	printf("Y = %f\n",y);
}
void intangdan(int a, int b, int c)
{
	int t;
	printf("Nhap a: \n");
	scanf("%d",&a);
	printf("Nhap a: \n");
	scanf("%d",&b);
	printf("Nhap a: \n");
	scanf("%d",&c);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	if(a>c)
	{
		t=a;
		a=c;
		c=t;
	}
	
	printf("%d %d %d",a,b,c);
	
}
int ktnamnhuan(int nam)
{
	return((nam%4==0 && nam%100!=0) || nam%400==0); 
}

int ktngay(int thang, int nam)
{
	int ngaytrongthang;
	
	
	switch(thang)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
		ngaytrongthang=31;
		break;
		case 4: case 6: case 9: case 11:
		ngaytrongthang=30;
		break;
		case 2: 
		int check=ktnamnhuan(nam);
		if(check==1)
		{
			ngaytrongthang=29;
		}else
		{
			ngaytrongthang=28;
		}
	
		
	}
	return ngaytrongthang;
		
}

void ngaynext(int ngay, int thang, int nam)
{
	int ngaytrongthang=ktngay(thang,nam);
	
	if(ngay<ngaytrongthang)
	{
		ngay++;
	}else if(thang<12)
	{
		ngay=1;
		thang++;
	}else
	{
		ngay=1;
		thang=1;
		nam++;
	}
	printf("%d/%d/%d\n",ngay,thang,nam);
}
void ngaytruoc(int ngay, int thang, int nam)
{
	int ngaytrongthang=ktngay(thang, nam);
	if(ngay==1)
	{
		ngay=ngaytrongthang;
		if(thang==1)
		{
			thang=12;
			nam--;
		}else
		{
			thang--;
		}
	}else
	ngay--;
	
	
	printf("%d/%d/%d\n",ngay,thang,nam);
}
void demsongay(int ngay, int thang, int nam)
{
	int i=1;
	int s=ngay;
	for(i=1;i<thang;i++)
	{
		switch(i)
		{
			case 4: case 6: case 9: case 11: s+=30;
			break;
			case 1: case 3: case 5: case 7: case 8: case 10: s+=31;
			break;
			case 2:
			int check = ktnamnhuan(nam);
			if(check==1)
			{
				s+=29;
			}else
			{
				s+=28;
			}
			
		}
	}
	printf("%d ngay\n",s);
}
void docso(int n)
{
	int donvi=n%10;
	int chuc=n/10;
	if(chuc==2)
	{
		printf("Hai ");
	}
	else if(chuc==3)
	{
		printf("Ba ");
	}
	else if(chuc==4)
	{
		printf("Bon ");
	}
	else if(chuc==5)
	{
		printf("Nam ");
	}
	else if(chuc==6)
	{
		printf("Sau ");
	}
	else if(chuc==7)
	{
		printf("Bay ");
	}
	else if(chuc==8)
	{
		printf("Tam ");
	}
	else if(chuc==9)
	{
		printf("Chin ");
	}
	printf("Muoi");
	
	if(donvi==1)
	{
		printf(" mot");
	}
	else if(donvi==2)
	{
		printf(" hai");
	}
	else if(donvi==3)
	{
		printf(" ba");
	}
	else if(donvi==4)
	{
		printf(" bon");
	}
	else if(donvi==5)
	{
		printf(" lam");
	}
	else if(donvi==6)
	{
		printf(" sau");
	}
	else if(donvi==7)
	{
		printf(" bay");
	}
	else if(donvi==8)
	{
		printf (" tam");
	}
	else if(donvi==9)
	{
		printf(" chin");
	}
}
double canbacn(float a,float n)
{
	
	return pow(a,1/n);
}
int power(int x,int y)
{
	if(y==0)
	{
		return 1;
	}
	else if(y%2==0)
	{
		return pow(x,y/2)*pow(x,y/2);
	}
	else if(y%2!=0)
	{
		return x*pow(x,y/2)*pow(x,y/2);
	}
}

void inbangcuuchuong()
{
	int i,j;
	for(i=2;i<=9;i++)
	{
		for(j=i;j<=9;j++)
		{
			printf("%d x %d = %d",i,j,i*j);
		}
	}
}
void sotien()
{
	for(int i=0;i<=200;i++)
	{
		for(int j=0;j<=100;j++)
		{
			for(int k=0;k<=40;k++)
			{
				if(i*1000 + j*2000 + k*5000 ==200000)
				{
					printf("%d to 1000(vnd) - %d to 2000(vnd) - %d to 5000(vnd)\n",i,j,k);
				}
			}
		}
	}
}
void tamgiaccan(int h)
{
	int m,n;
	m=h;
	n=h;
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=2*h-1;j++)
		{
			if(j>=m && j<=n)
			{
				printf("*");	
			}else
			{
				printf(" ");
			}
			
		}
		m--;
		n++;
		printf("\n");
	}
}
void tamgiacrong(int h)
{
	int m,n;
	m=h;
	n=h;
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=2*h-1;j++)
		{
			if(j==m || j==n ||i==h)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		m--;
		n++;
		printf("\n");
	}
}
void tamgiacvuong(int h)
{
	for(int i=1;i<=h;i++)
	{
		printf(" ");
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
void tamgiacvrong(int h)
{
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j==1 || j==i || i==h)
			{
				printf("* ");
			}else
			printf("  ");
		}
		printf("\n");
	}
}
void hinhvuong(int n, int m)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
void hvr(int n, int m)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i== 1|| j==1 || j==n ||i==m)
			{
				printf("* ");
			}else
			{
				printf("  ");
			}
		}
		printf("\n");
		
	}
}

void sinx()
{
	float x,sinx=0;
	int n;
	printf("Nhap x: ");
	scanf("%f",&x);
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		sinx+=pow(-1,i)*pow(x,(float)(2*i+1))/gt(2*i+1);
	}
	
	printf("sinx = %f",sinx);
}
#define PI 3.14
double cosx(double x, int n)
{
	double s=1;
	int i;
	
	for(i=0;i<n;i++)
	{
		s+=(pow(-1,i)*pow(x,2*i))/gt(2*i);
	}
	return s;
	
}


int main()
{
	float x;
	int n;

	printf("Nhap gia tri x: ");
	scanf("%f",&x);
	printf("Nhap gia n: ");
	scanf("%d",&n);
	printf("Cos(%.f) = %.f",x,cosx(x,n));



}

#ifndef SALE_H_
#define SALE_H_
//避免多次引用
namespace SALES
{
	const int QUARTERS = 4;

	class Sales
	{
	private:
		double sales[QUARTERS];
		double average ;
		double max ;
		double min;
	public:
		Sales(){};
		Sales(const double ar[], int n) ;
		void setSales() ;
		void showSales();
	};

}
#endif

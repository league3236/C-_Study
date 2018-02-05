
class Model {
	int _a;
	int _b;
public:
	Model(int a=0, int b=0)
	{
		setData(a, b);
	}
	void setData(int a, int b)
	{
		_a = a;
		_b = b;	
	}
	int getPowerValue()
	{
		int result = 1;
		for (int i = 0; i < _b; ++i)
			result *= _a;
		return result;
	}
};
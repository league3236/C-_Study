#include "Model.h"
#include "View.h"

class Controller {
	Model *_model;
	View *_view;
public:
	Controller()
	{
		_model = new Model();
		_view = new View( _model );
	}
	void run()
	{
		int a, b;
		_view->getData(a, b);
		_model->setData(a, b);
		int value = _model->getPowerValue();
		_view->output(a, b, value);
	}
};
#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "cmsis_os.h"
#include "main.h"

extern osSemaphoreId_t myBinarySemAnalaogHandle;
extern uint16_t ADCValue[10];

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	if(myBinarySemAnalaogHandle != NULL)
	{
		//if(osSemaphoreWait (myBinarySemAnalogHandle,100) == osOK)
		//{
			analogUpdate();
		//}
	}
}

void Model::analogUpdate()
{
	uint32_t sum = 0;

	for(int i = 0;i < 10; i++)
	{
		sum+=ADCValue[i];
	}

	modelListener->analogUpdate(sum/10);
}

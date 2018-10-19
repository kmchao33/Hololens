
#include "CNTKLibrary.h"
#include <armadillo>

using namespace arma;
using namespace CNTK;

int main()
{
    // The number of samples in the batch.
    size_t sampleCount = 1;
    
    // load model
    const wchar_t* gestureRecognitionModel = L"GRmodel.dnn";
    FunctionPtr modelFunc = Function::Load(modelFile, CNTK::DeviceDescriptor::CPUDevice());
    
    // Get input variable. The model has only one single input.
    Variable inputVar = modelFunc->Arguments()[0];

    // The model has only one output.
    // If the model has more than one output, use modelFunc->Outputs to get the list of output variables.
    Variable outputVar = modelFunc->Output();

    // Prepare input data.
    // For evaluating an image, you first need to perform some image preprocessing to make sure that the input image has the correct size and layout
    // that match the model inputs.
    // Please note that the model used by this example expects the CHW image layout.
    // inputVar.Shape[0] is image width, inputVar.Shape[1] is image height, and inputVar.Shape[2] is channels.
    // For simplicity and avoiding external dependencies, we skip the preprocessing step here, and just use some artificially created data as input.
    
    // dic = pickle.load(open("../result_dics/dic_train_1_2d_100.pickle", "rb" ))
    for (std::pair<std::string, std::vector<>> element : wordMap)    y = y.reshape(1, 100, 42)
	dataSeq.append(y)
	targetarr = np.zeros(NOS_CLASSES)
	for i in range(0, NOS_CLASSES):
		if (CLASSES[i]==x[:5]):
			targetarr[i] = 1
	targetSeq.append(targetarr)
    
    std::vector<float> inputData(inputVar.Shape().TotalSize() * sampleCount);
    for (size_t i = 0; i < inputData.size(); ++i)
    {
        inputData[i] = static_cast<float>(i % 255);
    }

    // Create input value and input data map.
    ValuePtr inputVal = Value::CreateBatch(inputVar.Shape(), inputData, device);
    std::unordered_map<Variable, ValuePtr> inputDataMap = { { inputVar, inputVal } };
}

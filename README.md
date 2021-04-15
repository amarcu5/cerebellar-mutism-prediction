# Prediction of Cerebellar Mutism Syndrome

This repository contains the source code for the publication "Improved Prediction of Post-Operative Paediatric Cerebellar Mutism Syndrome Using An Artificial Neural Network" by Jai Sidpra, Adam P. Marcus, Ulrike Löbel, Sebastian M. Toescu, David M. Mirsky, Kristen Yeom, Hani J. Marcus, Kristian Aquilina, and Kshitij Mankad.

## Usage

To ensure reproducibility the entire project runs within a Docker container. If needed, please [install Docker](https://docs.docker.com/get-docker/) before proceeding. Building, testing, and then running the project can be done as follows:

```bash
docker build -t cerebellar-mutism-prediction .
docker run -it --rm -v $(pwd):/home/ cerebellar-mutism-prediction build test run
```

Please note that [FANN formatted](https://libfann.github.io/fann/docs/files/fann_training_data_cpp-h.html#training_data.read_train_from_file) training data files are required and should be placed under `./data/raw/`. Ethics and privacy concerns prevent sharing of the original data set.

## Contributing

Contributions are welcomed! The project's structure is based on [Cookiecutter Data Science](https://drivendata.github.io/cookiecutter-data-science/). All C++ code should adhere to the [Google Style Guide](https://google.github.io/styleguide/cppguide.html) with two allowed exceptions: frequent use of unsigned integers (to facilitate integration with the FANN library), and lack of namespaces (to shorten identifiers as small project and clashes are unlikely). Comments should be [compliant with Doxygen](http://www.doxygen.nl/manual/docblocks.html).

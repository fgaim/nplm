//The framework for obtaining user arguments has been inspired by Sittichai Jiampojamarn's Many-to-Many alignment model (m2m-aligner). https://code.google.com/p/m2m-aligner/
#pragma once

#include <string>

#if NPLM_DOUBLE_PRECISION == 1
typedef double user_data_t;
#else
typedef float user_data_t;
#endif

namespace nplm
{

struct param 
{
    std::string train_file;
    std::string validation_file;
    std::string test_file;

    std::string model_file;

    std::string unigram_probs_file;
    std::string words_file;
    std::string input_words_file;
    std::string output_words_file;
    std::string model_prefix;

    int ngram_size;
    int vocab_size;
    int input_vocab_size;
    int output_vocab_size;
    int num_hidden;
    int embedding_dimension;
    int input_embedding_dimension;
    int output_embedding_dimension;
    std::string activation_function;
    std::string loss_function;
    std::string parameter_update;

    int minibatch_size;
    int validation_minibatch_size;
    int num_epochs;
    user_data_t learning_rate;
    user_data_t conditioning_constant;
    user_data_t decay;
    user_data_t adagrad_epsilon;
    bool init_normal;
    user_data_t init_range;

    int num_noise_samples;

    bool use_momentum;
    user_data_t initial_momentum;
    user_data_t final_momentum;

    user_data_t L2_reg;

    double input_dropout;
    int null_index;

    bool save_best;

    bool normalization;
    user_data_t normalization_init;

    int num_threads;
    int debug;
    bool premultiply;

    bool share_embeddings;

};

} // namespace nplm


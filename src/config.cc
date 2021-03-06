/*
  config.cc
  CMS_prediction_ann

  Created by Adam Marcus on 21/08/2018.

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "config.h"

const int kCrossValidationOuterFolds = 10;
const int kCrossValidationInnerFolds = 10;
const int kCrossValidationOuterRepeats = 10;
const int kCrossValidationInnerRepeats = 100;

const int kNetworksPerGeneration = 100;
const int kNetworksMatingPerGeneration = 10;
const int kMaxGenerations = 30;
const float kBigMutationStartChance = 1.0f;
const float kBigMutationEndChance = 0.05f;
const float kBigMutationCoefficient = 0.85f;

const int kTrainMaxEpochs = 100;
const int kTrainEarlyStoppingCount = 5;

const int kEnsembleSize = 100;

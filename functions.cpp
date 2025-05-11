

#include "functions.hpp"

bool at11thru3vals(std::string strInput) {
	int target = strInput.size() - 2;
	int val = strInput[target] - '0';

	
	if (val == 1) {
		int newTarget = strInput.size() - 1;
		int newVal = strInput[newTarget] - '0';
		if (newVal < 4) {
			return true;
		}
		return false;
	}
	return false;
}

std::string numSufFSimp(int target) {
	if (target > 3) {
		return "th";
	}
	else if (target == 3) {
		return "rd";
	}
	else if (target == 2) {
		return "nd";
	}
	else if (target == 1) {
		return "st";
	}
	else {
		// now it works for negatives!
		return "th";
	}
}


std::string number_suffix(int target, bool returnNumToo) {
	std::stringstream returnVal;
	if (returnNumToo) {
		returnVal << target;
	}
	if (target == 0) {
		returnVal << "";
		return returnVal.str();
	}
	std::string conv = std::to_string(target);
	if (conv.length() > 1) {
		//	processing for any number with more then two places ex: XX, XXX, XXXXXXXXXXX, etc etc
		if (at11thru3vals(conv)) {
			returnVal << "th";
			return returnVal.str();
		}
		int newTarget = conv.back() - '0';
		returnVal << numSufFSimp(newTarget);
	}
	else {
		//	processing for when only one cac ex: X;	
		returnVal << numSufFSimp(target);
	}
	return returnVal.str();
}
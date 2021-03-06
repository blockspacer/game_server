#ifndef DATA_GAME_ACTIVITY_H_
#define DATA_GAME_ACTIVITY_H_

#include "Kernel.h"

struct DataGameActivity
{
    uint32_t uid;
    uint32_t id;
    uint32_t version;
    uint32_t actdata[DB_GAME_DATA_NUM];

	DataGameActivity():
		uid(0),
		id(0),
		version(0)
	{
		memset(actdata, 0, sizeof(actdata));
	}
};

class CDataGameActivity :public DBCBase<DataGameActivity, DB_GAME_ACTIVITY>
{
public:
	virtual int Get(DataGameActivity &data);
	virtual int Get(vector<DataGameActivity> &data);
	virtual int Add(DataGameActivity &data);
	virtual int Set(DataGameActivity &data);
	virtual int Del(DataGameActivity &data);
};

#endif //DATA_GAME_ACTIVITY_H_

//void testSL1()
//{
//	SL sl;
//	SLInit(&sl);
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPushBack(&sl, 5);
//
//	SLPrint(&sl);
//
//	SLPopBack(&sl);
//	SLPrint(&sl);
//
//	SLPushBack(&sl, 1);
//	SLPrint(&sl);
//
//	SLDestory(&sl);
//}
//
//void testSL2()
//{
//	SL sl;
//	SLInit(&sl);
//
//	SLPushFront(&sl, 1);
//	SLPushFront(&sl, 2);
//	SLPushFront(&sl, 3);
//	SLPushFront(&sl, 4);
//	SLPushFront(&sl, 5);
//
//	SLPrint(&sl);
//
//	SLPopFront(&sl);
//	SLPopFront(&sl);
//	SLPopFront(&sl);
//
//	SLPrint(&sl);
//
//	SLDestory(&sl);
//}
//
//void testSL3()
//{
//	SL sl;
//	SLInit(&sl);
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPrint(&sl);
//
//	SLInsert(&sl, 3, 30);
//	SLPrint(&sl);
//
//	SLInsert(&sl, 5, 1000);//相当于尾插
//	SLPrint(&sl);
//
//	SLInsert(&sl, 0, 500);//相当于头插
//	SLPrint(&sl);
//
//	SLErase(&sl, 0);//相当于头删
//	SLPrint(&sl);
//
//	SLErase(&sl, sl.size-1);//相当于尾删
//	SLPrint(&sl);
//
//	SLPopFront(&sl);//测试复用
//	SLPrint(&sl);
//
//	int pos = SLFind(&sl, 30);
//	if (pos != -1)
//	{
//		SLErase(&sl, pos);
//	}
//	SLPrint(&sl);
//
//	SLDestory(&sl);
//}
//
//void testSL4()
//{
//	SL sl;
//	SLInit(&sl);
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPrint(&sl);
//
//	SLInsert(&sl, 3, 3);
//	SLInsert(&sl, 0, 3);
//	SLPrint(&sl);
//
//	//SLFind改进
//	//删除顺序表所有的3
//	int pos = SLFind2(&sl, 3, 0);
//	while (pos != -1)
//	{
//		SLErase(&sl, pos);
//		pos = SLFind2(&sl, 3, pos);
//	}
//	SLPrint(&sl);
//
//}
//
//int main()
//{
//	testSL4();
//
//	return 0;
//}

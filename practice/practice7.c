// QueuePersonLList getUniqueVotes(StackList sl){
//     QueuePersonLList ql;
//     ql.head = NULL;
//     ql.tail = NULL;
//     NodePtr temp = NULL;
//     bool flag;
//     int count = 0;

//     while(sl != NULL){
//         flag = false;
//         NodePtr topS = sl;
//         temp = sl;
//         sl = sl->link;
//         free(temp);

//         for(int i = 0; i < count; i++){
//             if(strcmp(topS->p.name, ql->head) == 0 && topS->p.id == ql.head->p.id){
//                 flag = true;
//             } else {
//                 temp = ql.head;
//                 ql.tail->link = temp;
//                 ql.head = ql.head->link;
//             }
//         }

//         if(flag == true){
//             continue;
//         } else {
//             ql.tail->link = topS;
//             ql.tail = ql.tail->link;
//             count++;+
//         }


//     }
// }

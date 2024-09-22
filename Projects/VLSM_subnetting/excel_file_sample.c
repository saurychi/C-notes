
int main() {
    lxw_workbook *workbook = workbook_new("example.xlsx");
    lxw_worksheet *worksheet = workbook_add_worksheet(workbook, NULL);

    worksheet_write_string(worksheet, 0, 0, "Hello, World!", NULL);

    workbook_close(workbook);

    return 0;
}

<%*
// تحديد مسار المجلد الذي تريد إنشاء الملفات فيه (اتركه فارغاً للإنشاء في المجلد الرئيسي)
const folderPath = ""; 

for (let i = 1; i <= 10; i++) {
    let fileName = `ملف_جديد_${i}.md`;
    let fileContent = `# هذا هو الملف رقم ${i}\n\nمحتوى مختلف مخصص لهذا الملف.`;
    
    // أمر إنشاء الملف داخل Obsidian
    await app.vault.create(folderPath + fileName, fileContent);
}
new Notice("تم إنشاء 10 ملفات بنجاح!");
%>
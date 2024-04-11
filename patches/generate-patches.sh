branch_name=$(git rev-parse --abbrev-ref HEAD)
patch_name="${branch_name##*/}"

echo ""
echo $branch_name
echo $patch_name

git diff --patch "v0.6-a..$branch_name" > "$patch_name-diff.patch" -- ':!*.patch'
git format-patch "v0.6-a..$branch_name" --stdout > "$patch_name.patch" -- ':!*.patch'


